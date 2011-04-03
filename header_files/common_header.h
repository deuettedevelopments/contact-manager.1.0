/*******************************************************************************
 **
 **  FILE: common header.h
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
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<gtk/gtk.h>


   /*     macros    */
   #define NAME 0
   #define MOBILE 1

    /*   structure to store the data  */
   typedef struct details
    {
           char name[25];
           char house[25];
           char post[25];
           char city[25];
           char pincode[7];
           char mobile[11];
           char email[25];
           char dob[10];
    }type_details;

    /*  Global variables  */
   // char* titles[]={"                          Name                       ","                         Phone Number                         "};
    
     /*   variable declarations  */

    /* GtkWidget* dialog_window_add;
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

     */
      
     GtkWidget* main_window;
     GtkWidget* main_box;
     GtkWidget* show_button;
     GtkWidget* add_button;
     GtkWidget* delete_button;
     GtkWidget* main_list;
     GtkWidget* scroll_box;
     GtkWidget* button_box;
     GtkWidget* label_space1;
     GtkWidget* scroll_bar_main_list;

    /*  prototype declaration  */
void quit_main(void);
void call_back_add(void);
void call_back_save(void);
void load_content(void);
void select_row_callback();
void call_back_show(void);
void call_back_delete(void);
