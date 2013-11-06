/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "libnfs-zdr.h"
#include "libnfs-raw-nsm.h"

bool_t
zdr_nsm_name (ZDR *zdrs, nsm_name *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_string (zdrs, &objp->mon_name, NSM_MAXSTRLEN))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_nsmstat1 (ZDR *zdrs, nsmstat1 *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_enum (zdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_nsm_stat_res (ZDR *zdrs, nsm_stat_res *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_nsmstat1 (zdrs, &objp->res))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->state))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_nsm_stat (ZDR *zdrs, nsm_stat *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_int (zdrs, &objp->state))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_nsm_my_id (ZDR *zdrs, nsm_my_id *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_string (zdrs, &objp->my_name, NSM_MAXSTRLEN))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->my_prog))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->my_vers))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->my_proc))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_nsm_mon_id (ZDR *zdrs, nsm_mon_id *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_string (zdrs, &objp->mon_name, NSM_MAXSTRLEN))
		 return FALSE;
	 if (!zdr_nsm_my_id (zdrs, &objp->my_id))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_nsm_mon (ZDR *zdrs, nsm_mon *objp)
{
	register int32_t *buf;
	buf = NULL;

	int i;
	 if (!zdr_nsm_mon_id (zdrs, &objp->mon_id))
		 return FALSE;
	 if (!zdr_opaque (zdrs, objp->priv, 16))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_nsm_stat_chg (ZDR *zdrs, nsm_stat_chg *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_string (zdrs, &objp->mon_name, NSM_MAXSTRLEN))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->state))
		 return FALSE;
	return TRUE;
}