/*******************************************************************************
 **
 **  FILE: main.c
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
#include "header_files/common_header.h"
int main( int argc , char* argv[] )
{
     gtk_init( &argc , &argv );
     char* titles[]={"               Name                   ","           Phone Number         "};
     /*  variable declarations /

     GtkWidget* main_window;
     GtkWidget* main_box;
     GtkWidget* show_button;
     GtkWidget* add_button;
     GtkWidget* delete_button;
     GtkWidget* main_list;
     GtkWidget* list_box;
     GtkWidget* button_box;
     GtkWidget* label_space1;
     GtkWidget* label_space2;
     GtkWidget* label_space3;

     /*  memmory allocation for the widgets  */

     main_window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
     main_box=gtk_vbox_new(FALSE,0);
     scroll_box=gtk_hbox_new(FALSE,0);
     button_box=gtk_hbox_new(FALSE,10);
     add_button=gtk_button_new_with_label("Add");
     main_list=gtk_clist_new_with_titles(2,titles);
     show_button=gtk_button_new_with_label("Details");
     delete_button=gtk_button_new_with_label("Delete");
     label_space1=gtk_label_new("");
     scroll_bar_main_list=gtk_scrolled_window_new(NULL,NULL);
     /*  setting the text property  */

     
     //gtk_text_set_editable (main_text,FALSE);

     /*    setting the properties of the scroll bar   */

     gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scroll_bar_main_list),GTK_POLICY_AUTOMATIC,GTK_POLICY_AUTOMATIC);
     gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll_bar_main_list),main_list);

     /*     setting the border of the main window    */
     
     gtk_container_set_border_width(GTK_CONTAINER(main_box), 10);
     
     /*  setting the size of the main_window  */

     //gtk_container_set_border_width(GTK_CONTAINER(main_window),200);
	//gtk_window_set_default_size (GTK_WINDOW(main_window), 500, 600);

	/*setting the size of the widgets  */
	
     gtk_widget_set_size_request(main_window,400,500);
     gtk_widget_set_size_request(main_list,360,420);
	gtk_widget_set_size_request(add_button,120,30);
	gtk_widget_set_size_request(show_button,120,30);
	gtk_widget_set_size_request(delete_button,120,30);
	gtk_widget_set_size_request(scroll_bar_main_list,380,440);	
     /*   setting the title of the main window  */

     gtk_window_set_title(GTK_WINDOW(main_window),"Contact Manager 2.0");

     /*   adding widgets to the box    */

     gtk_box_pack_start(GTK_BOX(main_box),scroll_box,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(main_box),button_box,FALSE,FALSE,5);
     gtk_box_pack_start(GTK_BOX(scroll_box),scroll_bar_main_list,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(button_box),add_button,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(button_box),show_button,FALSE,FALSE,0);
     gtk_box_pack_start(GTK_BOX(button_box),delete_button,FALSE,FALSE,0);

     /*  setting the property of the clist     */

     gtk_clist_column_titles_passive(GTK_CLIST(main_list));
     

     /* signals to various components of the project  */

     gtk_signal_connect(GTK_OBJECT(main_window),"delete_event",GTK_SIGNAL_FUNC(quit_main),NULL);
     gtk_signal_connect(GTK_OBJECT(add_button),"button_press_event",GTK_SIGNAL_FUNC(call_back_add),NULL);
     gtk_signal_connect(GTK_OBJECT(show_button),"button_press_event",GTK_SIGNAL_FUNC(call_back_show),NULL);
     gtk_signal_connect(GTK_OBJECT(delete_button),"button_press_event",GTK_SIGNAL_FUNC(call_back_delete),NULL);
     /* add the vbox to the window  */

     gtk_container_add(GTK_CONTAINER(main_window),main_box); 

     load_content();

     /*     retrieving data from the clist     */

     gtk_signal_connect(GTK_OBJECT(main_list),"select_row",GTK_SIGNAL_FUNC(select_row_callback),NULL);

     /*  show all the components  */
     gtk_widget_show(add_button);
     gtk_widget_show(show_button);
     gtk_widget_show(delete_button);
     gtk_widget_show(main_list);
     gtk_widget_show(button_box);
     gtk_widget_show(scroll_box);
     gtk_widget_show(main_box);
     gtk_widget_show(scroll_bar_main_list);
     gtk_widget_show(main_window);

     gtk_main();
return 0;
}
