/* goat-exercise-vala.c generated by valac 0.48.8, the Vala compiler
 * generated from goat-exercise-vala.vala, do not modify */

/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * hello-world.vala
 * Copyright (C) Niels De Graef <nielsdegraef@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <libgimp/gimp.h>
#include <glib-object.h>
#include <libgimp/gimpui.h>
#include <glib/gi18n-lib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <glib/gstdio.h>
#include <gegl.h>

#define TYPE_GOAT (goat_get_type ())
#define GOAT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_GOAT, Goat))
#define GOAT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_GOAT, GoatClass))
#define IS_GOAT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_GOAT))
#define IS_GOAT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_GOAT))
#define GOAT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_GOAT, GoatClass))

typedef struct _Goat Goat;
typedef struct _GoatClass GoatClass;
typedef struct _GoatPrivate GoatPrivate;
enum  {
	GOAT_0_PROPERTY,
	GOAT_NUM_PROPERTIES
};
static GParamSpec* goat_properties[GOAT_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _Goat {
	GimpPlugIn parent_instance;
	GoatPrivate * priv;
};

struct _GoatClass {
	GimpPlugInClass parent_class;
};

static gpointer goat_parent_class = NULL;

#define PLUG_IN_PROC "plug-in-goat-exercise-vala"
#define PLUG_IN_ROLE "goat-exercise-vala"
#define PLUG_IN_BINARY "goat-exercise-vala"
#define PLUG_IN_SOURCE PLUG_IN_BINARY ".vala"
#define URL "https://gitlab.gnome.org/GNOME/gimp/blob/master/plug-ins/goat-exercise" \
"s/goat-exercise-vala.vala"
gint _vala_main (gchar** args,
                 gint args_length1);
GType goat_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Goat, g_object_unref)
static GList* goat_real_query_procedures (GimpPlugIn* base);
static void _g_free0_ (gpointer var);
static inline void _g_list_free__g_free0_ (GList* self);
static GimpProcedure* goat_real_create_procedure (GimpPlugIn* base,
                                           const gchar* name);
GimpValueArray* goat_run (Goat* self,
                          GimpProcedure* procedure,
                          GimpRunMode run_mode,
                          GimpImage* image,
                          GimpDrawable* drawable,
                          GimpValueArray* args);
static GimpValueArray* _goat_run_gimp_run_image_func (GimpProcedure* procedure,
                                               GimpRunMode run_mode,
                                               GimpImage* image,
                                               GimpDrawable* drawable,
                                               GimpValueArray* args,
                                               gpointer self);
static void _gimp_standard_help_func_gimp_help_func (const gchar* help_id,
                                              void* help_data);
Goat* goat_new (void);
Goat* goat_construct (GType object_type);
static GType goat_get_type_once (void);

gint
_vala_main (gchar** args,
            gint args_length1)
{
	gint result = 0;
	result = gimp_main (TYPE_GOAT, (gint) args_length1, args);
	return result;
}

int
main (int argc,
      char ** argv)
{
	return _vala_main (argv, argc);
}

static void
_g_free0_ (gpointer var)
{
	var = (g_free (var), NULL);
}

static inline void
_g_list_free__g_free0_ (GList* self)
{
	g_list_free_full (self, (GDestroyNotify) _g_free0_);
}

static GList*
goat_real_query_procedures (GimpPlugIn* base)
{
	Goat * self;
	GList* procs = NULL;
	gchar* _tmp0_;
	GList* result = NULL;
	self = (Goat*) base;
	procs = NULL;
	_tmp0_ = g_strdup (PLUG_IN_PROC);
	procs = g_list_append (procs, _tmp0_);
	result = procs;
	return result;
}

static GimpValueArray*
_goat_run_gimp_run_image_func (GimpProcedure* procedure,
                               GimpRunMode run_mode,
                               GimpImage* image,
                               GimpDrawable* drawable,
                               GimpValueArray* args,
                               gpointer self)
{
	GimpValueArray* result;
	result = goat_run ((Goat*) self, procedure, run_mode, image, drawable, args);
	return result;
}

static GimpProcedure*
goat_real_create_procedure (GimpPlugIn* base,
                            const gchar* name)
{
	Goat * self;
	GimpImageProcedure* procedure = NULL;
	GimpImageProcedure* _tmp0_;
	GimpProcedure* result = NULL;
	self = (Goat*) base;
	g_return_val_if_fail (name != NULL, NULL);
	_vala_assert (g_strcmp0 (name, PLUG_IN_PROC) == 0, "name == PLUG_IN_PROC");
	_tmp0_ = (GimpImageProcedure*) gimp_image_procedure_new ((GimpPlugIn*) self, name, GIMP_PDB_PROC_TYPE_PLUGIN, _goat_run_gimp_run_image_func, g_object_ref (self), g_object_unref);
	procedure = _tmp0_;
	gimp_procedure_set_image_types ((GimpProcedure*) procedure, "RGB*, INDEXED*, GRAY*");
	gimp_procedure_set_menu_label ((GimpProcedure*) procedure, "Exercise a Vala goat");
	gimp_procedure_set_documentation ((GimpProcedure*) procedure, "Exercise a goat in the Vala language", "Takes a goat for a walk in Vala", PLUG_IN_PROC);
	gimp_procedure_add_menu_path ((GimpProcedure*) procedure, "<Image>/Filters/Development/Goat exercises/");
	gimp_procedure_set_attribution ((GimpProcedure*) procedure, "Niels De Graef", "Niels De Graef", "2020");
	gimp_procedure_set_icon_name ((GimpProcedure*) procedure, GIMP_ICON_GEGL);
	result = (GimpProcedure*) procedure;
	return result;
}

static void
_gimp_standard_help_func_gimp_help_func (const gchar* help_id,
                                         void* help_data)
{
	gimp_standard_help_func (help_id, help_data);
}

static gpointer
_g_error_copy0 (gpointer self)
{
	return self ? g_error_copy (self) : NULL;
}

GimpValueArray*
goat_run (Goat* self,
          GimpProcedure* procedure,
          GimpRunMode run_mode,
          GimpImage* image,
          GimpDrawable* drawable,
          GimpValueArray* args)
{
	gint x = 0;
	gint y = 0;
	gint width = 0;
	gint height = 0;
	gint _tmp44_ = 0;
	gint _tmp45_ = 0;
	gint _tmp46_ = 0;
	gint _tmp47_ = 0;
	gboolean _tmp48_;
	gchar** argv = NULL;
	gint argv_length1;
	gint _argv_size_;
	GimpValueArray* _tmp57_;
	GError* _inner_error0_ = NULL;
	GimpValueArray* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (procedure != NULL, NULL);
	g_return_val_if_fail (image != NULL, NULL);
	g_return_val_if_fail (drawable != NULL, NULL);
	g_return_val_if_fail (args != NULL, NULL);
	if (run_mode == GIMP_RUN_INTERACTIVE) {
		GimpDialog* dialog = NULL;
		GimpDialog* _tmp0_;
		GdkGeometry geometry = {0};
		GimpDialog* _tmp1_;
		GdkGeometry _tmp2_;
		GtkBox* box = NULL;
		GtkBox* _tmp3_;
		GtkBox* _tmp4_;
		GimpDialog* _tmp5_;
		GtkBox* _tmp6_;
		GtkBox* _tmp7_;
		GtkBox* _tmp8_;
		gchar* head_text = NULL;
		gchar* _tmp9_;
		GtkLabel* label = NULL;
		const gchar* _tmp10_;
		GtkLabel* _tmp11_;
		GtkBox* _tmp12_;
		GtkLabel* _tmp13_;
		GtkLabel* _tmp14_;
		gchar* file = NULL;
		const gchar* _tmp15_;
		gchar* _tmp16_;
		gchar* contents = NULL;
		GtkScrolledWindow* scrolled = NULL;
		GtkScrolledWindow* _tmp22_;
		GtkScrolledWindow* _tmp23_;
		GtkBox* _tmp24_;
		GtkScrolledWindow* _tmp25_;
		GtkScrolledWindow* _tmp26_;
		GtkTextView* view = NULL;
		GtkTextView* _tmp27_;
		GtkTextView* _tmp28_;
		GtkTextView* _tmp29_;
		GtkTextView* _tmp30_;
		GtkTextBuffer* _tmp31_;
		GtkTextBuffer* _tmp32_;
		const gchar* _tmp33_;
		GtkScrolledWindow* _tmp34_;
		GtkTextView* _tmp35_;
		GtkTextView* _tmp36_;
		gimp_ui_init (PLUG_IN_BINARY);
		_tmp0_ = (GimpDialog*) gimp_dialog_new (_ ("Exercise a goat (Vala)"), PLUG_IN_ROLE, NULL, GTK_DIALOG_USE_HEADER_BAR, _gimp_standard_help_func_gimp_help_func, PLUG_IN_PROC, _ ("_Cancel"), GTK_RESPONSE_CANCEL, _ ("_Source"), GTK_RESPONSE_APPLY, _ ("_Run"), GTK_RESPONSE_OK, NULL, NULL);
		g_object_ref_sink (_tmp0_);
		dialog = _tmp0_;
		memset (&geometry, 0, sizeof (GdkGeometry));
		geometry.min_aspect = 0.5;
		geometry.max_aspect = 1.0;
		_tmp1_ = dialog;
		_tmp2_ = geometry;
		gtk_window_set_geometry_hints ((GtkWindow*) _tmp1_, NULL, &_tmp2_, GDK_HINT_ASPECT);
		_tmp3_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 12);
		g_object_ref_sink (_tmp3_);
		box = _tmp3_;
		_tmp4_ = box;
		gtk_container_set_border_width ((GtkContainer*) _tmp4_, (guint) 12);
		_tmp5_ = dialog;
		_tmp6_ = gtk_dialog_get_content_area ((GtkDialog*) _tmp5_);
		_tmp7_ = box;
		gtk_container_add ((GtkContainer*) _tmp6_, (GtkWidget*) _tmp7_);
		_tmp8_ = box;
		gtk_widget_show ((GtkWidget*) _tmp8_);
		_tmp9_ = g_strdup_printf (_ ("This plug-in is an exercise in '%s' to demo plug-in creation.\n" \
"Check out the last version of the source code online by clicking the \"" \
"Source\" button."), "Vala");
		head_text = _tmp9_;
		_tmp10_ = head_text;
		_tmp11_ = (GtkLabel*) gtk_label_new (_tmp10_);
		g_object_ref_sink (_tmp11_);
		label = _tmp11_;
		_tmp12_ = box;
		_tmp13_ = label;
		gtk_box_pack_start (_tmp12_, (GtkWidget*) _tmp13_, FALSE, FALSE, (guint) 1);
		_tmp14_ = label;
		gtk_widget_show ((GtkWidget*) _tmp14_);
		_tmp15_ = gimp_plug_in_directory ();
		_tmp16_ = g_build_filename (_tmp15_, "plug-ins", PLUG_IN_BINARY, PLUG_IN_SOURCE, NULL);
		file = _tmp16_;
		{
			const gchar* _tmp17_;
			gchar* _tmp18_ = NULL;
			_tmp17_ = file;
			g_file_get_contents (_tmp17_, &_tmp18_, NULL, &_inner_error0_);
			_g_free0 (contents);
			contents = _tmp18_;
			if (G_UNLIKELY (_inner_error0_ != NULL)) {
				goto __catch0_g_error;
			}
		}
		goto __finally0;
		__catch0_g_error:
		{
			GError* err = NULL;
			GError* _tmp19_;
			const gchar* _tmp20_;
			gchar* _tmp21_;
			err = _inner_error0_;
			_inner_error0_ = NULL;
			_tmp19_ = err;
			_tmp20_ = _tmp19_->message;
			_tmp21_ = g_strdup_printf ("Couldn't get file contents: %s", _tmp20_);
			_g_free0 (contents);
			contents = _tmp21_;
			_g_error_free0 (err);
		}
		__finally0:
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			_g_free0 (contents);
			_g_free0 (file);
			_g_object_unref0 (label);
			_g_free0 (head_text);
			_g_object_unref0 (box);
			_g_object_unref0 (dialog);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return NULL;
		}
		_tmp22_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
		g_object_ref_sink (_tmp22_);
		scrolled = _tmp22_;
		_tmp23_ = scrolled;
		gtk_widget_set_vexpand ((GtkWidget*) _tmp23_, TRUE);
		_tmp24_ = box;
		_tmp25_ = scrolled;
		gtk_box_pack_start (_tmp24_, (GtkWidget*) _tmp25_, TRUE, TRUE, (guint) 1);
		_tmp26_ = scrolled;
		gtk_widget_show ((GtkWidget*) _tmp26_);
		_tmp27_ = (GtkTextView*) gtk_text_view_new ();
		g_object_ref_sink (_tmp27_);
		view = _tmp27_;
		_tmp28_ = view;
		gtk_text_view_set_wrap_mode (_tmp28_, GTK_WRAP_WORD);
		_tmp29_ = view;
		gtk_text_view_set_editable (_tmp29_, FALSE);
		_tmp30_ = view;
		_tmp31_ = gtk_text_view_get_buffer (_tmp30_);
		_tmp32_ = _tmp31_;
		_tmp33_ = contents;
		g_object_set (_tmp32_, "text", _tmp33_, NULL);
		_tmp34_ = scrolled;
		_tmp35_ = view;
		gtk_container_add ((GtkContainer*) _tmp34_, (GtkWidget*) _tmp35_);
		_tmp36_ = view;
		gtk_widget_show ((GtkWidget*) _tmp36_);
		while (TRUE) {
			gint response = 0;
			GimpDialog* _tmp37_;
			_tmp37_ = dialog;
			response = gimp_dialog_run (_tmp37_);
			if (response == ((gint) GTK_RESPONSE_OK)) {
				GimpDialog* _tmp38_;
				_tmp38_ = dialog;
				gtk_widget_destroy ((GtkWidget*) _tmp38_);
				break;
			} else {
				if (response == ((gint) GTK_RESPONSE_APPLY)) {
					{
						GimpDialog* _tmp39_;
						_tmp39_ = dialog;
						gtk_show_uri_on_window ((GtkWindow*) _tmp39_, URL, (guint32) GDK_CURRENT_TIME, &_inner_error0_);
						if (G_UNLIKELY (_inner_error0_ != NULL)) {
							goto __catch1_g_error;
						}
					}
					goto __finally1;
					__catch1_g_error:
					{
						GError* err = NULL;
						GError* _tmp40_;
						const gchar* _tmp41_;
						err = _inner_error0_;
						_inner_error0_ = NULL;
						_tmp40_ = err;
						_tmp41_ = _tmp40_->message;
						g_warning ("goat-exercise-vala.vala:124: Couldn't launch browser for %s: %s", URL, _tmp41_);
						_g_error_free0 (err);
					}
					__finally1:
					if (G_UNLIKELY (_inner_error0_ != NULL)) {
						_g_object_unref0 (view);
						_g_object_unref0 (scrolled);
						_g_free0 (contents);
						_g_free0 (file);
						_g_object_unref0 (label);
						_g_free0 (head_text);
						_g_object_unref0 (box);
						_g_object_unref0 (dialog);
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
						g_clear_error (&_inner_error0_);
						return NULL;
					}
					continue;
				} else {
					GimpDialog* _tmp42_;
					GimpValueArray* _tmp43_;
					_tmp42_ = dialog;
					gtk_widget_destroy ((GtkWidget*) _tmp42_);
					_tmp43_ = gimp_procedure_new_return_values (procedure, GIMP_PDB_CANCEL, NULL);
					result = _tmp43_;
					_g_object_unref0 (view);
					_g_object_unref0 (scrolled);
					_g_free0 (contents);
					_g_free0 (file);
					_g_object_unref0 (label);
					_g_free0 (head_text);
					_g_object_unref0 (box);
					_g_object_unref0 (dialog);
					return result;
				}
			}
		}
		_g_object_unref0 (view);
		_g_object_unref0 (scrolled);
		_g_free0 (contents);
		_g_free0 (file);
		_g_object_unref0 (label);
		_g_free0 (head_text);
		_g_object_unref0 (box);
		_g_object_unref0 (dialog);
	}
	_tmp48_ = gimp_drawable_mask_intersect (drawable, &_tmp44_, &_tmp45_, &_tmp46_, &_tmp47_);
	x = _tmp44_;
	y = _tmp45_;
	width = _tmp46_;
	height = _tmp47_;
	if (!_tmp48_) {
		GError* _error_ = NULL;
		GError* _tmp49_;
		GError* _tmp50_;
		GError* _tmp51_;
		GimpValueArray* _tmp52_;
		_tmp49_ = g_error_new_literal (g_quark_from_string ("goat-error-quark"), 0, "No pixels to process in the selected area.");
		_error_ = _tmp49_;
		_tmp50_ = _error_;
		_tmp51_ = _g_error_copy0 (_tmp50_);
		_tmp52_ = gimp_procedure_new_return_values (procedure, GIMP_PDB_CALLING_ERROR, _tmp51_);
		result = _tmp52_;
		_g_error_free0 (_error_);
		return result;
	}
	argv = NULL;
	argv_length1 = 0;
	_argv_size_ = argv_length1;
	gegl_init ((gint*) (&argv_length1), &argv);
	_argv_size_ = argv_length1;
	{
		GeglBuffer* buffer = NULL;
		GeglBuffer* _tmp53_;
		GeglBuffer* shadow_buffer = NULL;
		GeglBuffer* _tmp54_;
		GeglBuffer* _tmp55_;
		GeglBuffer* _tmp56_;
		_tmp53_ = gimp_drawable_get_buffer (drawable);
		buffer = _tmp53_;
		_tmp54_ = gimp_drawable_get_shadow_buffer (drawable);
		shadow_buffer = _tmp54_;
		_tmp55_ = buffer;
		_tmp56_ = shadow_buffer;
		gegl_render_op (_tmp55_, _tmp56_, "gegl:invert", NULL, NULL);
		_g_object_unref0 (shadow_buffer);
		_g_object_unref0 (buffer);
	}
	gimp_drawable_merge_shadow (drawable, TRUE);
	gimp_drawable_update (drawable, x, y, width, height);
	gimp_displays_flush ();
	gegl_exit ();
	_tmp57_ = gimp_procedure_new_return_values (procedure, GIMP_PDB_SUCCESS, NULL);
	result = _tmp57_;
	return result;
}

Goat*
goat_construct (GType object_type)
{
	Goat * self = NULL;
	self = (Goat*) g_object_new (object_type, NULL);
	return self;
}

Goat*
goat_new (void)
{
	return goat_construct (TYPE_GOAT);
}

static void
goat_class_init (GoatClass * klass,
                 gpointer klass_data)
{
	goat_parent_class = g_type_class_peek_parent (klass);
	((GimpPlugInClass *) klass)->query_procedures = (GList* (*) (GimpPlugIn*)) goat_real_query_procedures;
	((GimpPlugInClass *) klass)->create_procedure = (GimpProcedure* (*) (GimpPlugIn*, const gchar*)) goat_real_create_procedure;
}

static void
goat_instance_init (Goat * self,
                    gpointer klass)
{
}

static GType
goat_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GoatClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) goat_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Goat), 0, (GInstanceInitFunc) goat_instance_init, NULL };
	GType goat_type_id;
	goat_type_id = g_type_register_static (gimp_plug_in_get_type (), "Goat", &g_define_type_info, 0);
	return goat_type_id;
}

GType
goat_get_type (void)
{
	static volatile gsize goat_type_id__volatile = 0;
	if (g_once_init_enter (&goat_type_id__volatile)) {
		GType goat_type_id;
		goat_type_id = goat_get_type_once ();
		g_once_init_leave (&goat_type_id__volatile, goat_type_id);
	}
	return goat_type_id__volatile;
}
