//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, VMUClassInfo, VMUClassInfoMap, VMUNonOverlappingRangeArray, VMUTaskMemoryScanner;

@interface VMUObjectIdentifier : NSObject
{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    _Bool _targetUsesObjc2runtime;
    _Bool _needToValidateAddressRange;
    CDUnknownBlockType _memoryReader;
    VMUTaskMemoryScanner *_scanner;
    struct libSwiftRemoteMirrorWrapper *_swiftMirror;
    NSString *_libSwiftRemoteMirrorPath;
    NSString *_libSwiftRemoteMirrorLegacyPath;
    void *_libSwiftRemoteMirrorHandle;
    void *_libSwiftRemoteMirrorLegacyHandle;
    struct _CSTypeRef _swiftCoreSymbolOwner;
    VMUClassInfoMap *_realizedIsaToClassInfo;
    VMUClassInfoMap *_unrealizedClassInfos;
    VMUClassInfoMap *_cfTypeIDToClassInfo;
    NSMutableDictionary *_nonobjectClassInfosDict;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _foundationCFTypeIsa;
    unsigned long long _swiftClassCount;
    unsigned long long _cfClassCount;
    CDUnknownBlockType _isaTranslator;
    _Bool _fragileNonPointerIsas;
    unsigned long long _lastCPlusPlusIsa;
    VMUClassInfo *_lastCPlusPlusClassInfo;
    NSHashTable *_nonObjectIsaHash;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    id *_labelStringUniquingMaps;
    id *_stringTypeDescriptions;
    NSMutableSet *_stringUniquingSet;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
    _Bool _targetProcessContainsMallocStackLoggingLiteZone;
    unsigned long long _cfBooleanTrueAddress;
    unsigned long long _cfBooleanFalseAddress;
}

@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses; // @synthesize realizedClasses=_realizedIsaToClassInfo;
@property(readonly, nonatomic) struct libSwiftRemoteMirrorWrapper *swiftMirror; // @synthesize swiftMirror=_swiftMirror;
@property(readonly, nonatomic) CDUnknownBlockType memoryReader; // @synthesize memoryReader=_memoryReader;
@property(readonly) _Bool needToValidateAddressRange; // @synthesize needToValidateAddressRange=_needToValidateAddressRange;
- (void).cxx_destruct;
- (id)initWithTask:(unsigned int)arg1;
- (void)loadSwiftReflectionLibrary;
- (void)_populateSwiftDebugVariables:(struct libSwiftRemoteMirrorWrapper *)arg1;
- (int)_populateSwiftReflectionInfo:(struct libSwiftRemoteMirrorWrapper *)arg1;
- (_Bool)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef)arg1;
- (_Bool)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef)arg1 avoidSystem:(_Bool)arg2;
- (_Bool)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg1;
- (unsigned short)_targetProcessSwiftReflectionVersion;
@property(readonly, nonatomic) NSString *swiftCoreSymbolOwnerPath;
- (id)_scanner;
- (struct _CSTypeRef)_symbolicator;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 expectedClassName:(id)arg4;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 usingHandlerBlock:(CDUnknownBlockType)arg4;
- (id)labelForObjectOfClass:(id)arg1 atOffset:(unsigned int)arg2 ofObject:(void *)arg3;
- (id)labelForMallocBlock:(struct _VMURange)arg1 usingHandlerBlock:(CDUnknownBlockType)arg2;
- (id)labelForMallocBlock:(struct _VMURange)arg1;
- (id)labelFor__NSMallocBlock__:(void *)arg1;
- (id)labelForNSXPCConnection:(void *)arg1;
- (id)labelForNSXPCInterface:(void *)arg1;
- (id)labelForProtocol:(void *)arg1;
- (id)labelForOSXPCConnection:(void *)arg1;
- (id)labelForOSTransaction:(void *)arg1;
- (id)labelForOSLog:(void *)arg1;
- (id)labelForOSDispatchQueue:(void *)arg1;
- (id)labelForOSDispatchMach:(void *)arg1;
- (id)labelForNSInlineData:(void *)arg1;
- (id)labelForNSConcreteMutableData:(void *)arg1;
- (id)labelForNSConcreteData:(void *)arg1;
- (id)labelForNSData:(void *)arg1;
- (id)labelForNSCFSet:(void *)arg1;
- (id)labelForNSSet:(void *)arg1;
- (id)labelForNSConcreteHashTable:(void *)arg1;
- (id)labelForNSCFDictionary:(void *)arg1;
- (id)labelForNSDictionary:(void *)arg1;
- (id)labelForNSArray:(void *)arg1;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForNSDate:(void *)arg1;
- (id)labelForNSNumber:(void *)arg1;
- (id)labelForNSBundle:(void *)arg1;
- (id)labelForCFBundle:(void *)arg1;
- (id)labelForNSPathStore2:(void *)arg1;
- (id)labelForNSURL:(void *)arg1;
- (id)labelForNSConcreteAttributedString:(void *)arg1;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(_Bool)arg2;
- (id)labelForNSString:(void *)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(_Bool)arg4;
- (id)labelForNSString:(void *)arg1;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(_Bool)arg3;
- (id)labelForTaggedPointer:(void *)arg1;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)osMajorMinorVersionString;
- (unsigned long long)addressOfSymbol:(const char *)arg1 inLibrary:(const char *)arg2;
- (struct _VMURange)vmRegionRangeForAddress:(unsigned long long)arg1;
- (void)findObjCclasses;
- (void)findCFTypes;
- (void)_faultClass:(unsigned long long)arg1 ofType:(int)arg2;
- (id)_returnFaultedClass:(unsigned long long)arg1 ofType:(int)arg2;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)classInfoForNonobjectMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)_classInfoWithPthreadType:(id)arg1;
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;
- (_Bool)_isValidInstanceLength:(unsigned long long)arg1 expectedLength:(unsigned long long)arg2;
- (id)classInfoForObjectWithRange:(struct _VMURange)arg1;
- (void)enumerateAllClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)SwiftClassCount;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)CFTypeCount;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 scanner:(id)arg3;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;

@end

