#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char data;
    struct node *next;
}*top=NULL;


void push(char x){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Stack is full");
    }else{
        temp->data = x;
        temp->next = top;
        top = temp;
    }
}
char pop()
{
    struct node *t;
    char x=-1;
    if(top==NULL)
        printf("Stack is Empty\n");
    else{        
        t=top;
        top=top->next;        
        x=t->data;
        free(t);
}
return x;
}



void display(){
    struct node *p;
    p=top;
    while(top!=NULL){
        printf("  %d",top->data);
        top = top->next;
    }
    printf("\n");
}


int pre(char x){

    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='*' || x=='/'){
         return 2;
    } else {
        return 0;
    }

}

int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }
    else {   
        return 1;
    }
}




int isBalanced(char *exp){
   int i;
   for(i=0;exp[i]!='\0';i++){
       if(exp[i]=='('){
           push(exp[i]);
       }else if(exp[i]==')'){
           if(top==NULL){
               return 0;
           }
           pop();
       }
       
   } 
   if(top==NULL){
           return 1;
       }else{
           return 0;
       }
}

 char * InToPost(char *infix){
     int i=0,j=0;
     char *postfix;
     int len=strlen(infix); 
     postfix=(char *)malloc((len+2)*sizeof(char));

       while(infix[i]!='\0'){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];
        }else{ 
            if(pre(infix[i]>pre(top->data))){
                  push(infix[i++]);
             }else{
                  postfix[j++]=pop();
             }
     }
    
 }

 while(top!=NULL)        
    postfix[j++]=pop();
postfix[j]='\0';
return postfix;
}


// char * InToPost(char *infix)
// {
//     int i=0,j=0;
//     char *postfix;
//     int len=strlen(infix); 
//     postfix=(char *)malloc((len+2)*sizeof(char));
//     while(infix[i]!='\0')
//         {
//             if(isOperand(infix[i]))
//                 postfix[j++]=infix[i++];
//             else
//             {
//                 if(pre(infix[i])>pre(top->data))
//                     push(infix[i++]);
//                 else 
//                 {  
//                     postfix[j++]=pop();
//                 }       
//             }    
//         }
//         while(top!=NULL)        
//             postfix[j++]=pop();
//         postfix[j]='\0';
//         return postfix;
//         }



 int main(){


    char infix[] = "a+b*c";
     push('#');
     char *postfix = InToPost(infix);

     printf("%s",postfix);
     return 0;
 }