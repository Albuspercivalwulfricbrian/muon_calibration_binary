// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__CustomClassDictionary
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/ADCHeaderStructs.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/BinaryDataStructs.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/ChannelEntry.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/Coeffs.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/Map.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/PSDmuonTracker.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/constants.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/like_ivashkin_wants_it.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/muon_struct.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/time_left.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *IntegralInfo_Dictionary();
   static void IntegralInfo_TClassManip(TClass*);
   static void *new_IntegralInfo(void *p = nullptr);
   static void *newArray_IntegralInfo(Long_t size, void *p);
   static void delete_IntegralInfo(void *p);
   static void deleteArray_IntegralInfo(void *p);
   static void destruct_IntegralInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IntegralInfo*)
   {
      ::IntegralInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IntegralInfo));
      static ::ROOT::TGenericClassInfo 
         instance("IntegralInfo", "ChannelEntry.h", 10,
                  typeid(::IntegralInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &IntegralInfo_Dictionary, isa_proxy, 4,
                  sizeof(::IntegralInfo) );
      instance.SetNew(&new_IntegralInfo);
      instance.SetNewArray(&newArray_IntegralInfo);
      instance.SetDelete(&delete_IntegralInfo);
      instance.SetDeleteArray(&deleteArray_IntegralInfo);
      instance.SetDestructor(&destruct_IntegralInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IntegralInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::IntegralInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::IntegralInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IntegralInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::IntegralInfo*>(nullptr))->GetClass();
      IntegralInfo_TClassManip(theClass);
   return theClass;
   }

   static void IntegralInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *short_energy_ChannelEntry_Dictionary();
   static void short_energy_ChannelEntry_TClassManip(TClass*);
   static void *new_short_energy_ChannelEntry(void *p = nullptr);
   static void *newArray_short_energy_ChannelEntry(Long_t size, void *p);
   static void delete_short_energy_ChannelEntry(void *p);
   static void deleteArray_short_energy_ChannelEntry(void *p);
   static void destruct_short_energy_ChannelEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::short_energy_ChannelEntry*)
   {
      ::short_energy_ChannelEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::short_energy_ChannelEntry));
      static ::ROOT::TGenericClassInfo 
         instance("short_energy_ChannelEntry", "ChannelEntry.h", 18,
                  typeid(::short_energy_ChannelEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &short_energy_ChannelEntry_Dictionary, isa_proxy, 4,
                  sizeof(::short_energy_ChannelEntry) );
      instance.SetNew(&new_short_energy_ChannelEntry);
      instance.SetNewArray(&newArray_short_energy_ChannelEntry);
      instance.SetDelete(&delete_short_energy_ChannelEntry);
      instance.SetDeleteArray(&deleteArray_short_energy_ChannelEntry);
      instance.SetDestructor(&destruct_short_energy_ChannelEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::short_energy_ChannelEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::short_energy_ChannelEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::short_energy_ChannelEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *short_energy_ChannelEntry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::short_energy_ChannelEntry*>(nullptr))->GetClass();
      short_energy_ChannelEntry_TClassManip(theClass);
   return theClass;
   }

   static void short_energy_ChannelEntry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *diff_short_energy_ChannelEntry_Dictionary();
   static void diff_short_energy_ChannelEntry_TClassManip(TClass*);
   static void *new_diff_short_energy_ChannelEntry(void *p = nullptr);
   static void *newArray_diff_short_energy_ChannelEntry(Long_t size, void *p);
   static void delete_diff_short_energy_ChannelEntry(void *p);
   static void deleteArray_diff_short_energy_ChannelEntry(void *p);
   static void destruct_diff_short_energy_ChannelEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::diff_short_energy_ChannelEntry*)
   {
      ::diff_short_energy_ChannelEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::diff_short_energy_ChannelEntry));
      static ::ROOT::TGenericClassInfo 
         instance("diff_short_energy_ChannelEntry", "ChannelEntry.h", 31,
                  typeid(::diff_short_energy_ChannelEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &diff_short_energy_ChannelEntry_Dictionary, isa_proxy, 4,
                  sizeof(::diff_short_energy_ChannelEntry) );
      instance.SetNew(&new_diff_short_energy_ChannelEntry);
      instance.SetNewArray(&newArray_diff_short_energy_ChannelEntry);
      instance.SetDelete(&delete_diff_short_energy_ChannelEntry);
      instance.SetDeleteArray(&deleteArray_diff_short_energy_ChannelEntry);
      instance.SetDestructor(&destruct_diff_short_energy_ChannelEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::diff_short_energy_ChannelEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::diff_short_energy_ChannelEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::diff_short_energy_ChannelEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *diff_short_energy_ChannelEntry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::diff_short_energy_ChannelEntry*>(nullptr))->GetClass();
      diff_short_energy_ChannelEntry_TClassManip(theClass);
   return theClass;
   }

   static void diff_short_energy_ChannelEntry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChannelEntry_Dictionary();
   static void ChannelEntry_TClassManip(TClass*);
   static void *new_ChannelEntry(void *p = nullptr);
   static void *newArray_ChannelEntry(Long_t size, void *p);
   static void delete_ChannelEntry(void *p);
   static void deleteArray_ChannelEntry(void *p);
   static void destruct_ChannelEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChannelEntry*)
   {
      ::ChannelEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChannelEntry));
      static ::ROOT::TGenericClassInfo 
         instance("ChannelEntry", "ChannelEntry.h", 40,
                  typeid(::ChannelEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChannelEntry_Dictionary, isa_proxy, 4,
                  sizeof(::ChannelEntry) );
      instance.SetNew(&new_ChannelEntry);
      instance.SetNewArray(&newArray_ChannelEntry);
      instance.SetDelete(&delete_ChannelEntry);
      instance.SetDeleteArray(&deleteArray_ChannelEntry);
      instance.SetDestructor(&destruct_ChannelEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChannelEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::ChannelEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ChannelEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChannelEntry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ChannelEntry*>(nullptr))->GetClass();
      ChannelEntry_TClassManip(theClass);
   return theClass;
   }

   static void ChannelEntry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Coeffs_struct_Dictionary();
   static void Coeffs_struct_TClassManip(TClass*);
   static void *new_Coeffs_struct(void *p = nullptr);
   static void *newArray_Coeffs_struct(Long_t size, void *p);
   static void delete_Coeffs_struct(void *p);
   static void deleteArray_Coeffs_struct(void *p);
   static void destruct_Coeffs_struct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Coeffs_struct*)
   {
      ::Coeffs_struct *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Coeffs_struct));
      static ::ROOT::TGenericClassInfo 
         instance("Coeffs_struct", "Coeffs.h", 4,
                  typeid(::Coeffs_struct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Coeffs_struct_Dictionary, isa_proxy, 4,
                  sizeof(::Coeffs_struct) );
      instance.SetNew(&new_Coeffs_struct);
      instance.SetNewArray(&newArray_Coeffs_struct);
      instance.SetDelete(&delete_Coeffs_struct);
      instance.SetDeleteArray(&deleteArray_Coeffs_struct);
      instance.SetDestructor(&destruct_Coeffs_struct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Coeffs_struct*)
   {
      return GenerateInitInstanceLocal(static_cast<::Coeffs_struct*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Coeffs_struct*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Coeffs_struct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::Coeffs_struct*>(nullptr))->GetClass();
      Coeffs_struct_TClassManip(theClass);
   return theClass;
   }

   static void Coeffs_struct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HitInfo_Dictionary();
   static void HitInfo_TClassManip(TClass*);
   static void *new_HitInfo(void *p = nullptr);
   static void *newArray_HitInfo(Long_t size, void *p);
   static void delete_HitInfo(void *p);
   static void deleteArray_HitInfo(void *p);
   static void destruct_HitInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HitInfo*)
   {
      ::HitInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HitInfo));
      static ::ROOT::TGenericClassInfo 
         instance("HitInfo", "muon_struct.h", 4,
                  typeid(::HitInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HitInfo_Dictionary, isa_proxy, 4,
                  sizeof(::HitInfo) );
      instance.SetNew(&new_HitInfo);
      instance.SetNewArray(&newArray_HitInfo);
      instance.SetDelete(&delete_HitInfo);
      instance.SetDeleteArray(&deleteArray_HitInfo);
      instance.SetDestructor(&destruct_HitInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HitInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::HitInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HitInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HitInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HitInfo*>(nullptr))->GetClass();
      HitInfo_TClassManip(theClass);
   return theClass;
   }

   static void HitInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TrackInfo_Dictionary();
   static void TrackInfo_TClassManip(TClass*);
   static void *new_TrackInfo(void *p = nullptr);
   static void *newArray_TrackInfo(Long_t size, void *p);
   static void delete_TrackInfo(void *p);
   static void deleteArray_TrackInfo(void *p);
   static void destruct_TrackInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackInfo*)
   {
      ::TrackInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TrackInfo));
      static ::ROOT::TGenericClassInfo 
         instance("TrackInfo", "muon_struct.h", 19,
                  typeid(::TrackInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TrackInfo_Dictionary, isa_proxy, 4,
                  sizeof(::TrackInfo) );
      instance.SetNew(&new_TrackInfo);
      instance.SetNewArray(&newArray_TrackInfo);
      instance.SetDelete(&delete_TrackInfo);
      instance.SetDeleteArray(&deleteArray_TrackInfo);
      instance.SetDestructor(&destruct_TrackInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TrackInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TrackInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TrackInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TrackInfo*>(nullptr))->GetClass();
      TrackInfo_TClassManip(theClass);
   return theClass;
   }

   static void TrackInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MuonTracker_Dictionary();
   static void MuonTracker_TClassManip(TClass*);
   static void delete_MuonTracker(void *p);
   static void deleteArray_MuonTracker(void *p);
   static void destruct_MuonTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuonTracker*)
   {
      ::MuonTracker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MuonTracker));
      static ::ROOT::TGenericClassInfo 
         instance("MuonTracker", "PSDmuonTracker.h", 16,
                  typeid(::MuonTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MuonTracker_Dictionary, isa_proxy, 4,
                  sizeof(::MuonTracker) );
      instance.SetDelete(&delete_MuonTracker);
      instance.SetDeleteArray(&deleteArray_MuonTracker);
      instance.SetDestructor(&destruct_MuonTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuonTracker*)
   {
      return GenerateInitInstanceLocal(static_cast<::MuonTracker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MuonTracker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MuonTracker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MuonTracker*>(nullptr))->GetClass();
      MuonTracker_TClassManip(theClass);
   return theClass;
   }

   static void MuonTracker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_IntegralInfo(void *p) {
      return  p ? new(p) ::IntegralInfo : new ::IntegralInfo;
   }
   static void *newArray_IntegralInfo(Long_t nElements, void *p) {
      return p ? new(p) ::IntegralInfo[nElements] : new ::IntegralInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_IntegralInfo(void *p) {
      delete (static_cast<::IntegralInfo*>(p));
   }
   static void deleteArray_IntegralInfo(void *p) {
      delete [] (static_cast<::IntegralInfo*>(p));
   }
   static void destruct_IntegralInfo(void *p) {
      typedef ::IntegralInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::IntegralInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_short_energy_ChannelEntry(void *p) {
      return  p ? new(p) ::short_energy_ChannelEntry : new ::short_energy_ChannelEntry;
   }
   static void *newArray_short_energy_ChannelEntry(Long_t nElements, void *p) {
      return p ? new(p) ::short_energy_ChannelEntry[nElements] : new ::short_energy_ChannelEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_short_energy_ChannelEntry(void *p) {
      delete (static_cast<::short_energy_ChannelEntry*>(p));
   }
   static void deleteArray_short_energy_ChannelEntry(void *p) {
      delete [] (static_cast<::short_energy_ChannelEntry*>(p));
   }
   static void destruct_short_energy_ChannelEntry(void *p) {
      typedef ::short_energy_ChannelEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::short_energy_ChannelEntry

namespace ROOT {
   // Wrappers around operator new
   static void *new_diff_short_energy_ChannelEntry(void *p) {
      return  p ? new(p) ::diff_short_energy_ChannelEntry : new ::diff_short_energy_ChannelEntry;
   }
   static void *newArray_diff_short_energy_ChannelEntry(Long_t nElements, void *p) {
      return p ? new(p) ::diff_short_energy_ChannelEntry[nElements] : new ::diff_short_energy_ChannelEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_diff_short_energy_ChannelEntry(void *p) {
      delete (static_cast<::diff_short_energy_ChannelEntry*>(p));
   }
   static void deleteArray_diff_short_energy_ChannelEntry(void *p) {
      delete [] (static_cast<::diff_short_energy_ChannelEntry*>(p));
   }
   static void destruct_diff_short_energy_ChannelEntry(void *p) {
      typedef ::diff_short_energy_ChannelEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::diff_short_energy_ChannelEntry

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChannelEntry(void *p) {
      return  p ? new(p) ::ChannelEntry : new ::ChannelEntry;
   }
   static void *newArray_ChannelEntry(Long_t nElements, void *p) {
      return p ? new(p) ::ChannelEntry[nElements] : new ::ChannelEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChannelEntry(void *p) {
      delete (static_cast<::ChannelEntry*>(p));
   }
   static void deleteArray_ChannelEntry(void *p) {
      delete [] (static_cast<::ChannelEntry*>(p));
   }
   static void destruct_ChannelEntry(void *p) {
      typedef ::ChannelEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ChannelEntry

namespace ROOT {
   // Wrappers around operator new
   static void *new_Coeffs_struct(void *p) {
      return  p ? new(p) ::Coeffs_struct : new ::Coeffs_struct;
   }
   static void *newArray_Coeffs_struct(Long_t nElements, void *p) {
      return p ? new(p) ::Coeffs_struct[nElements] : new ::Coeffs_struct[nElements];
   }
   // Wrapper around operator delete
   static void delete_Coeffs_struct(void *p) {
      delete (static_cast<::Coeffs_struct*>(p));
   }
   static void deleteArray_Coeffs_struct(void *p) {
      delete [] (static_cast<::Coeffs_struct*>(p));
   }
   static void destruct_Coeffs_struct(void *p) {
      typedef ::Coeffs_struct current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Coeffs_struct

namespace ROOT {
   // Wrappers around operator new
   static void *new_HitInfo(void *p) {
      return  p ? new(p) ::HitInfo : new ::HitInfo;
   }
   static void *newArray_HitInfo(Long_t nElements, void *p) {
      return p ? new(p) ::HitInfo[nElements] : new ::HitInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_HitInfo(void *p) {
      delete (static_cast<::HitInfo*>(p));
   }
   static void deleteArray_HitInfo(void *p) {
      delete [] (static_cast<::HitInfo*>(p));
   }
   static void destruct_HitInfo(void *p) {
      typedef ::HitInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HitInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackInfo(void *p) {
      return  p ? new(p) ::TrackInfo : new ::TrackInfo;
   }
   static void *newArray_TrackInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TrackInfo[nElements] : new ::TrackInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackInfo(void *p) {
      delete (static_cast<::TrackInfo*>(p));
   }
   static void deleteArray_TrackInfo(void *p) {
      delete [] (static_cast<::TrackInfo*>(p));
   }
   static void destruct_TrackInfo(void *p) {
      typedef ::TrackInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TrackInfo

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MuonTracker(void *p) {
      delete (static_cast<::MuonTracker*>(p));
   }
   static void deleteArray_MuonTracker(void *p) {
      delete [] (static_cast<::MuonTracker*>(p));
   }
   static void destruct_MuonTracker(void *p) {
      typedef ::MuonTracker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MuonTracker

namespace ROOT {
   static TClass *vectorlEshortgR_Dictionary();
   static void vectorlEshortgR_TClassManip(TClass*);
   static void *new_vectorlEshortgR(void *p = nullptr);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "vector", 389,
                  typeid(vector<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));

      ::ROOT::AddClassAlternate("vector<short>","std::vector<short, std::allocator<short> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<short>*>(nullptr))->GetClass();
      vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete (static_cast<vector<short>*>(p));
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] (static_cast<vector<short>*>(p));
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<short>

namespace ROOT {
   static TClass *vectorlEHitInfogR_Dictionary();
   static void vectorlEHitInfogR_TClassManip(TClass*);
   static void *new_vectorlEHitInfogR(void *p = nullptr);
   static void *newArray_vectorlEHitInfogR(Long_t size, void *p);
   static void delete_vectorlEHitInfogR(void *p);
   static void deleteArray_vectorlEHitInfogR(void *p);
   static void destruct_vectorlEHitInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<HitInfo>*)
   {
      vector<HitInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<HitInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<HitInfo>", -2, "vector", 389,
                  typeid(vector<HitInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEHitInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<HitInfo>) );
      instance.SetNew(&new_vectorlEHitInfogR);
      instance.SetNewArray(&newArray_vectorlEHitInfogR);
      instance.SetDelete(&delete_vectorlEHitInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlEHitInfogR);
      instance.SetDestructor(&destruct_vectorlEHitInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<HitInfo> >()));

      ::ROOT::AddClassAlternate("vector<HitInfo>","std::vector<HitInfo, std::allocator<HitInfo> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<HitInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEHitInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<HitInfo>*>(nullptr))->GetClass();
      vectorlEHitInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEHitInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEHitInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HitInfo> : new vector<HitInfo>;
   }
   static void *newArray_vectorlEHitInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HitInfo>[nElements] : new vector<HitInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEHitInfogR(void *p) {
      delete (static_cast<vector<HitInfo>*>(p));
   }
   static void deleteArray_vectorlEHitInfogR(void *p) {
      delete [] (static_cast<vector<HitInfo>*>(p));
   }
   static void destruct_vectorlEHitInfogR(void *p) {
      typedef vector<HitInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<HitInfo>

namespace {
  void TriggerDictionaryInitialization_libCustomClassDictionary_Impl() {
    static const char* headers[] = {
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/ADCHeaderStructs.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/BinaryDataStructs.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/ChannelEntry.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/Coeffs.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/Map.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/PSDmuonTracker.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/constants.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/like_ivashkin_wants_it.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/muon_struct.h",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include/time_left.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/doc/root_build/include",
"/mnt/DATA/muon_calibration/muon_calibration_binary/include",
"/mnt/DATA/muon_calibration/muon_calibration_binary/src",
"/mnt/DATA/muon_calibration/muon_calibration_binary",
"/home/doc/root_build/include/",
"/mnt/DATA/muon_calibration/muon_calibration_binary/build/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libCustomClassDictionary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
struct __attribute__((annotate("$clingAutoload$ChannelEntry.h")))  __attribute__((annotate("$clingAutoload$/mnt/DATA/muon_calibration/muon_calibration_binary/include/BinaryDataStructs.h")))  IntegralInfo;
struct __attribute__((annotate("$clingAutoload$ChannelEntry.h")))  __attribute__((annotate("$clingAutoload$/mnt/DATA/muon_calibration/muon_calibration_binary/include/BinaryDataStructs.h")))  short_energy_ChannelEntry;
struct __attribute__((annotate("$clingAutoload$ChannelEntry.h")))  __attribute__((annotate("$clingAutoload$/mnt/DATA/muon_calibration/muon_calibration_binary/include/BinaryDataStructs.h")))  diff_short_energy_ChannelEntry;
class __attribute__((annotate("$clingAutoload$ChannelEntry.h")))  __attribute__((annotate("$clingAutoload$/mnt/DATA/muon_calibration/muon_calibration_binary/include/BinaryDataStructs.h")))  ChannelEntry;
struct __attribute__((annotate("$clingAutoload$/mnt/DATA/muon_calibration/muon_calibration_binary/include/Coeffs.h")))  Coeffs_struct;
class __attribute__((annotate("$clingAutoload$muon_struct.h")))  __attribute__((annotate("$clingAutoload$/mnt/DATA/muon_calibration/muon_calibration_binary/include/PSDmuonTracker.h")))  HitInfo;
class __attribute__((annotate("$clingAutoload$muon_struct.h")))  __attribute__((annotate("$clingAutoload$/mnt/DATA/muon_calibration/muon_calibration_binary/include/PSDmuonTracker.h")))  TrackInfo;
class __attribute__((annotate("$clingAutoload$/mnt/DATA/muon_calibration/muon_calibration_binary/include/PSDmuonTracker.h")))  MuonTracker;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCustomClassDictionary dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/ADCHeaderStructs.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/BinaryDataStructs.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/ChannelEntry.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/Coeffs.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/Map.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/PSDmuonTracker.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/constants.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/like_ivashkin_wants_it.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/muon_struct.h"
#include "/mnt/DATA/muon_calibration/muon_calibration_binary/include/time_left.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChannelEntry", payloadCode, "@",
"Coeffs_struct", payloadCode, "@",
"HitInfo", payloadCode, "@",
"IntegralInfo", payloadCode, "@",
"MuonTracker", payloadCode, "@",
"TrackInfo", payloadCode, "@",
"diff_short_energy_ChannelEntry", payloadCode, "@",
"short_energy_ChannelEntry", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libCustomClassDictionary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCustomClassDictionary_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCustomClassDictionary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCustomClassDictionary() {
  TriggerDictionaryInitialization_libCustomClassDictionary_Impl();
}
