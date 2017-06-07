//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface JSVirtualMachine : NSObject
{
    struct OpaqueJSContextGroup *m_group;
    // Error parsing type: {Lock="m_byte"{Atomic<unsigned char>="value"{atomic<unsigned char>="__a_"AC}}}, name: m_externalDataMutex
    NSMapTable *m_contextCache;
    NSMapTable *m_externalObjectGraph;
    NSMapTable *m_externalRememberedSet;
}

+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup *)arg1;
- (id).cxx_construct;
- (void)removeManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)addManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)addExternalRememberedObject:(id)arg1;
- (_Bool)isOldExternalObject:(id)arg1;
- (void)dealloc;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup *)arg1;
- (id)init;
- (id)externalRememberedSet;
- (id)externalObjectGraph;
-     // Error parsing type: ^{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}16@0:8, name: externalDataMutex
- (void)addContext:(id)arg1 forGlobalContextRef:(struct OpaqueJSContext *)arg2;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext *)arg1;

@end
