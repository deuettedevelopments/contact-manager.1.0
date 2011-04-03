/*******************************************************************************
 **
 **  FILE: functions.c
 **
 **
 *******************************************************************************
 **
 **  Copyright (c) 2011
 **
 **  Author(s):
 **
 -* This program is free software; you can redistribute it and/or modify
 -* it under the terms of the GNU General Public License as published by
 -* the Free Software Foundation; either version 2 of the License, or
 -* (at your option) any later version.
 -*
 -* This program is distributed in the hope that it will be useful,
 -* but WITHOUT ANY WARRANTY; without even the implied warranty of
 -* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 -* GNU General Public License for more details.
 -*
 -* You should have received a copy of the GNU General Public License
 -* along with this program; if not, write to 
               -    the Free Software Foundation, Inc.,
               -    51 Franklin Street, 
               -    Fifth Floor, Boston MA 02110-1301, USA.

*******************************************************************************/
//#include "/home/acs/gtk_projects/Contact_Manager/header_files/common_header.h"
#include "../header_files/common_header.h"

/*typedef struct type_details
    {
           char name[25];
           char house[25];
           char post[25];
           char city[25];
           char pincode[7];
           char mobile[11];
           char email[25];
           char dob[10];
    }type_details;*/

    /* global variables */
    

     GtkWidget* dialog_window_add;
     GtkWidget* name_hbox;
     GtkWidget* house_hbox;
     GtkWidget* post_hbox;
     GtkWidget* city_hbox;
     GtkWidget* pincode_hbox;
     GtkWidget* mobile_hbox;
     GtkWidget* email_hbox;
     GtkWidget* dob_hbox;
     GtkWidget* button_hbox;
     GtkWidget* save_button;
     GtkWidget* name_label;
     GtkWidget* house_label;
     GtkWidget* post_label;
     GtkWidget* city_label;
     GtkWidget* pincode_label;
     GtkWidget* mobile_label;
     GtkWidget* email_label;
     GtkWidget* dob_label;
     GtkWidget* name_text;
     GtkWidget* house_text;
     GtkWidget* post_text;
     GtkWidget* city_text;
     GtkWidget* pincode_text;
     GtkWidget* mobile_text;
     GtkWidget* email_text;
     GtkWidget* dob_text;
     GtkWidget* space_label;
     GtkWidget* close_button;

     char name[25],mobile[11];
     char *text[]={name,mobile};
     char search_key[30];
     int search_data;
     int search_row;
/* function associated with the close button of the window*/

void quit_main(void)
{
     gtk_main_quit();
}

/*   call back function to the add button in the main window. this will show a window where you can
     see a form like entry to enter the details.     */
     
void call_back_add()
{
  /*   /*   variable declarations /

     GtkWidget* dialog_window_add;
     GtkWidget* name_hbox;
     GtkWidget* house_hbox;
     GtkWidget* post_hbox;
     GtkWidget* city_hbox;
     GtkWidget* pincode_hbox;
     GtkWidget* mobile_hbox;
     GtkWidget* email_hbox;
     GtkWidget* dob_hbox;
     GtkWidget* button_hbox;
     GtkWidget* save_button;
     GtkWidget* name_label;
     GtkWidget* house_label;
     GtkWidget* post_label;
     GtkWidget* city_label;
     GtkWidget* pincode_label;
     GtkWidget* mobile_label;
     GtkWidget* email_label;
     GtkWidget* dob_label;
     GtkWidget* name_text;
     GtkWidget* house_text;
     GtkWidget* post_text;
     GtkWidget* city_text;
     GtkWidget* pincode_text;
     GtkWidget* mobile_text;
     GtkWidget* email_text;
     GtkWidget* dob_text;
     GtkWidget* space_label;
     
     /*  memory allocation    */

     dialog_window_add=gtk_dialog_new();
     name_hbox=gtk_hbox_new(FALSE,5);
     house_hbox=gtk_hbox_new(FALSE,5);
     post_hbox=gtk_hbox_new(FALSE,5);
     city_hbox=gtk_hbox_new(FALSE,5);
     pincode_hbox=gtk_hbox_new(FALSE,5);
     mobile_hbox=gtk_hbox_new(FALSE,5);
     email_hbox=gtk_hbox_new(FALSE,5);
     dob_hbox=gtk_hbox_new(FALSE,5);
     button_hbox=gtk_hbox_new(FALSE,5);
     save_button=gtk_button_new_with_label("Save");
     name_label=gtk_label_new("Name");
     house_label=gtk_label_new("House Name");
     post_label=gtk_label_new("Post");
     city_label=gtk_label_new("City");
     pincode_label=gtk_label_new("Pincode");
     mobile_label=gtk_label_new("Mobile");
     email_label=gtk_label_new("E-mail");
     dob_label=gtk_label_new("Date of Birth");
     name_text=gtk_entry_new_with_max_length(25);
     house_text=gtk_entry_new_with_max_length(25);
     post_text=gtk_entry_new_with_max_length(25);
     city_text=gtk_entry_new_with_max_length(25);
     pincode_text=gtk_entry_new_with_max_length(7);
     mobile_text=gtk_entry_new_with_max_length(11);
     email_text=gtk_entry_new_with_max_length(25);
     dob_text=gtk_entry_new_with_max_length(10);
     space_label=gtk_label_new(" ");  
       
     /*    setting the size of the dialog box     */

     gtk_widget_set_size_request(dialog_window_add,320,380);
     gtk_widget_set_size_request(name_label,150,30);
     gtk_widget_set_size_request(name_text,150,30);
     gtk_widget_set_size_request(house_label,150,30);
     gtk_widget_set_size_request(house_text,150,30);
     gtk_widget_set_size_request(post_label,150,30);
     gtk_widget_set_size_request(post_text,150,30);
     gtk_widget_set_size_request(city_label,150,30);
     gtk_widget_set_size_request(city_text,150,30);
     gtk_widget_set_size_request(pincode_label,150,30);
     gtk_widget_set_size_request(pincode_text,150,30);
     gtk_widget_set_size_request(mobile_label,150,30);
     gtk_widget_set_size_request(mobile_text,150,30);
     gtk_widget_set_size_request(email_label,150,30);
     gtk_widget_set_size_request(email_text,150,30);
     gtk_widget_set_size_request(dob_label,150,30);
     gtk_widget_set_size_request(dob_text,150,30);
     gtk_widget_set_size_request(save_button,100,30);
     gtk_widget_set_size_request(space_label,100,30);
     
     /*    setting the justification of the label    */

     gtk_label_set_justify(GTK_LABEL(name_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(house_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(post_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(city_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(pincode_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(mobile_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(email_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(dob_label),GTK_JUSTIFY_LEFT);

     /*    add all the hbox to the default vbox of the dialog box   */

     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),name_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),house_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),post_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),city_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),pincode_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),mobile_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),email_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),dob_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),button_hbox,FALSE,FALSE,5);

     /* add the widgets to the user defined boxes   */

     gtk_box_pack_start((GTK_BOX(button_hbox)),space_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(button_hbox),save_button,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(name_hbox),name_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(name_hbox),name_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(house_hbox),house_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(house_hbox),house_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(post_hbox),post_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(post_hbox),post_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(city_hbox),city_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(city_hbox),city_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(pincode_hbox),pincode_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(pincode_hbox),pincode_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(mobile_hbox),mobile_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(mobile_hbox),mobile_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(email_hbox),email_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(email_hbox),email_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(dob_hbox),dob_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(dob_hbox),dob_text,FALSE,FALSE,0);

     /*  gives signal connection to widgets  */
     gtk_signal_connect(GTK_OBJECT(save_button),"button_press_event",GTK_SIGNAL_FUNC(call_back_save),NULL);
     
     
     /*  setting the title of the dialog box    */

     gtk_window_set_title(GTK_WINDOW(dialog_window_add),"Add Contact");

     /*   shows the widgets*/
     
     gtk_widget_show(name_hbox);
     gtk_widget_show(house_hbox);
     gtk_widget_show(post_hbox);
     gtk_widget_show(city_hbox);
     gtk_widget_show(pincode_hbox);
     gtk_widget_show(mobile_hbox);
     gtk_widget_show(email_hbox);
     gtk_widget_show(dob_hbox);
     gtk_widget_show(button_hbox);
     gtk_widget_show(save_button);
     gtk_widget_show(name_label);
     gtk_widget_show(house_label);
     gtk_widget_show(post_label);
     gtk_widget_show(city_label);
     gtk_widget_show(pincode_label);
     gtk_widget_show(mobile_label);
     gtk_widget_show(email_label);
     gtk_widget_show(dob_label);
     gtk_widget_show(name_text);
     gtk_widget_show(house_text);
     gtk_widget_show(post_text);
     gtk_widget_show(city_text);
     gtk_widget_show(pincode_text);
     gtk_widget_show(mobile_text);
     gtk_widget_show(email_text);
     gtk_widget_show(dob_text);
     gtk_widget_show(dialog_window_add);
     gtk_widget_show(space_label);

}

/*    this function get involked when the user cllick the 'save' button
      in the 'add contact' window.it will write the content of the window 
      to the 'database.cm' file in binary format.    */


void  call_back_save(void)
{
    FILE *fp;
    type_details details;
    strcpy(details.name,gtk_entry_get_text(GTK_ENTRY(name_text)));
    strcpy(details.house,gtk_entry_get_text(GTK_ENTRY(house_text)));
    strcpy(details.post,gtk_entry_get_text(GTK_ENTRY(post_text)));
    strcpy(details.city,gtk_entry_get_text(GTK_ENTRY(city_text)));
    strcpy(details.pincode,gtk_entry_get_text(GTK_ENTRY(pincode_text)));
    strcpy(details.mobile,gtk_entry_get_text(GTK_ENTRY(mobile_text)));
    strcpy(details.email,gtk_entry_get_text(GTK_ENTRY(email_text)));
    strcpy(details.dob,gtk_entry_get_text(GTK_ENTRY(dob_text)));
    
    /*    add the new data to the clist in the main window*/

    strcpy(name,details.name);
    strcpy(mobile,details.mobile);
    gtk_clist_append(GTK_CLIST(main_list),text);
    
    fp=fopen("./database/database.cm","a+");
    //fseek(fp,0,SEEK_END);
    if(fp==NULL)
    {
         exit(1);
    }
    fwrite(&details,sizeof(details),1,fp);
    fclose(fp);
    gtk_widget_hide(dialog_window_add);
 
}

void detail_dialog_hide()
{

    gtk_widget_hide(dialog_window_add);

}
    
/*    this function load the content of the database to the main clist.   */


void load_content(void)
{
    FILE *fp;
    type_details details;
    fp=fopen("./database/database.cm","r");
    int row=0;
    while(fread(&details,sizeof(details),1,fp)!=0)
    {
         row++;
         strcpy(name,details.name);
         strcpy(mobile,details.mobile);
         gtk_clist_insert(GTK_CLIST(main_list),row,text);
    }
    fclose(fp);

}


/*    retrieving the data from the clist    */

void select_row_callback(GtkWidget* w,gint row,gint column,GdkEventButton* event,gpointer data )
{
    gchar *mytext;
    gtk_clist_get_text(GTK_CLIST(main_list),row,column,&mytext);
    strcpy(search_key,mytext);
    search_data=column;
    search_row=row;
}

/*      call back function for the 'Details button'.it will retrieve the whole data corresponding
        to 'search_key'.    */

void call_back_show(void)
{
     type_details result;
     FILE *fp;
     fp=fopen("./database/database.cm","r");
     if(search_data==NAME)
     {
           while(fread(&result,sizeof(result),1,fp)!=0)
           {
               if(!strcmp(result.name,search_key))
                    break;
           }
     }
     else
     {
           while(fread(&result,sizeof(result),1,fp)!=0)
           {
               if(!strcmp(result.mobile,search_key))
                    break;
           }
     }
     fclose(fp);     
     /*    memory allocation   */
     dialog_window_add=gtk_dialog_new();
     name_hbox=gtk_hbox_new(FALSE,5);
     house_hbox=gtk_hbox_new(FALSE,5);
     post_hbox=gtk_hbox_new(FALSE,5);
     city_hbox=gtk_hbox_new(FALSE,5);
     pincode_hbox=gtk_hbox_new(FALSE,5);
     mobile_hbox=gtk_hbox_new(FALSE,5);
     email_hbox=gtk_hbox_new(FALSE,5);
     dob_hbox=gtk_hbox_new(FALSE,5);
     button_hbox=gtk_hbox_new(FALSE,5);
     close_button=gtk_button_new_with_label("Close");
     name_label=gtk_label_new("Name");
     house_label=gtk_label_new("House Name");
     post_label=gtk_label_new("Post");
     city_label=gtk_label_new("City");
     pincode_label=gtk_label_new("Pincode");
     mobile_label=gtk_label_new("Mobile");
     email_label=gtk_label_new("E-mail");
     dob_label=gtk_label_new("Date of Birth");
     name_text=gtk_entry_new_with_max_length(25);
     house_text=gtk_entry_new_with_max_length(25);
     post_text=gtk_entry_new_with_max_length(25);
     city_text=gtk_entry_new_with_max_length(25);
     pincode_text=gtk_entry_new_with_max_length(7);
     mobile_text=gtk_entry_new_with_max_length(11);
     email_text=gtk_entry_new_with_max_length(25);
     dob_text=gtk_entry_new_with_max_length(10);
     space_label=gtk_label_new(" ");  
       
     /*    setting the size of the dialog box     */

     gtk_widget_set_size_request(dialog_window_add,320,380);
     gtk_widget_set_size_request(name_label,150,30);
     gtk_widget_set_size_request(name_text,150,30);
     gtk_widget_set_size_request(house_label,150,30);
     gtk_widget_set_size_request(house_text,150,30);
     gtk_widget_set_size_request(post_label,150,30);
     gtk_widget_set_size_request(post_text,150,30);
     gtk_widget_set_size_request(city_label,150,30);
     gtk_widget_set_size_request(city_text,150,30);
     gtk_widget_set_size_request(pincode_label,150,30);
     gtk_widget_set_size_request(pincode_text,150,30);
     gtk_widget_set_size_request(mobile_label,150,30);
     gtk_widget_set_size_request(mobile_text,150,30);
     gtk_widget_set_size_request(email_label,150,30);
     gtk_widget_set_size_request(email_text,150,30);
     gtk_widget_set_size_request(dob_label,150,30);
     gtk_widget_set_size_request(dob_text,150,30);
     gtk_widget_set_size_request(close_button,100,30);
     gtk_widget_set_size_request(space_label,100,30);
     
     /*    setting the justification of the label    */

     gtk_label_set_justify(GTK_LABEL(name_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(house_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(post_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(city_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(pincode_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(mobile_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(email_label),GTK_JUSTIFY_LEFT);
     gtk_label_set_justify(GTK_LABEL(dob_label),GTK_JUSTIFY_LEFT);

     /*    add all the hbox to the default vbox of the dialog box   */

     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),name_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),house_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),post_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),city_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),pincode_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),mobile_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),email_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),dob_hbox,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog_window_add)->vbox),button_hbox,FALSE,FALSE,5);

     /* add the widgets to the user defined boxes   */

     gtk_box_pack_start((GTK_BOX(button_hbox)),space_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(button_hbox),close_button,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(name_hbox),name_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(name_hbox),name_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(house_hbox),house_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(house_hbox),house_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(post_hbox),post_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(post_hbox),post_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(city_hbox),city_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(city_hbox),city_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(pincode_hbox),pincode_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(pincode_hbox),pincode_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(mobile_hbox),mobile_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(mobile_hbox),mobile_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(email_hbox),email_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(email_hbox),email_text,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(dob_hbox),dob_label,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(dob_hbox),dob_text,FALSE,FALSE,0);

     /*  gives signal connection to widgets  */

     //gtk_signal_connect(GTK_OBJECT(save_button),"button_press_event",GTK_SIGNAL_FUNC(call_back_save),NULL);
     
     
     /*  setting the title of the dialog box    */

     gtk_window_set_title(GTK_WINDOW(dialog_window_add),"Details");


     /*     shows the search result on the text entries    */
           gtk_entry_set_text( GTK_ENTRY(name_text),result.name);
           gtk_entry_set_text( GTK_ENTRY(house_text),result.house);
           gtk_entry_set_text( GTK_ENTRY(post_text),result.post);
           gtk_entry_set_text( GTK_ENTRY(city_text),result.city);
           gtk_entry_set_text( GTK_ENTRY(pincode_text),result.pincode);
           gtk_entry_set_text( GTK_ENTRY(mobile_text),result.mobile);
           gtk_entry_set_text( GTK_ENTRY(email_text),result.email);
           gtk_entry_set_text( GTK_ENTRY(dob_text),result.dob);

     /*     lock the data in the text entries      */

     gtk_entry_set_editable(GTK_ENTRY(name_text),FALSE);
     gtk_entry_set_editable(GTK_ENTRY(house_text),FALSE);
     gtk_entry_set_editable(GTK_ENTRY(post_text),FALSE);
     gtk_entry_set_editable(GTK_ENTRY(city_text),FALSE);
     gtk_entry_set_editable(GTK_ENTRY(pincode_text),FALSE);
     gtk_entry_set_editable(GTK_ENTRY(mobile_text),FALSE);
     gtk_entry_set_editable(GTK_ENTRY(email_text),FALSE);
     gtk_entry_set_editable(GTK_ENTRY(dob_text),FALSE);

     /*   shows the widgets*/
     
     gtk_widget_show(name_hbox);
     gtk_widget_show(house_hbox);
     gtk_widget_show(post_hbox);
     gtk_widget_show(city_hbox);
     gtk_widget_show(pincode_hbox);
     gtk_widget_show(mobile_hbox);
     gtk_widget_show(email_hbox);
     gtk_widget_show(dob_hbox);
     gtk_widget_show(button_hbox);
     gtk_widget_show(close_button);
     gtk_widget_show(name_label);
     gtk_widget_show(house_label);
     gtk_widget_show(post_label);
     gtk_widget_show(city_label);
     gtk_widget_show(pincode_label);
     gtk_widget_show(mobile_label);
     gtk_widget_show(email_label);
     gtk_widget_show(dob_label);
     gtk_widget_show(name_text);
     gtk_widget_show(house_text);
     gtk_widget_show(post_text);
     gtk_widget_show(city_text);
     gtk_widget_show(pincode_text);
     gtk_widget_show(mobile_text);
     gtk_widget_show(email_text);
     gtk_widget_show(dob_text);
     gtk_widget_show(dialog_window_add);
     gtk_widget_show(space_label);

}


/*       call back function to the click event of the delete button. 
         this will delete the entry from the clist and also from the 
         database    */

void call_back_delete(void)
{
    type_details data;
    FILE *fp,*fd;
    fp=fopen("./database/database.cm","r");
    fd=fopen("./database/temp.cm","a");
    if(search_data==NAME)
    {
         while(fread(&data,sizeof(data),1,fp))
         {
               if(strcmp(search_key,data.name))
               {
                     fwrite(&data,sizeof(data),1,fd);
               }
         }
    }
    else
    {
         while(fread(&data,sizeof(data),1,fp))
         {
               if(strcmp(search_key,data.mobile))
               {
                     fwrite(&data,sizeof(data),1,fd);
               }
         }
    }
    remove("./database/database.cm");
    rename("./database/temp.cm","./database/database.cm");
    gtk_clist_remove(GTK_CLIST(main_list),search_row);
    fclose(fp);
    fclose(fd);                       
}
