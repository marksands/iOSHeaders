//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSExtension, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface _MDIndexExtension : NSObject
{
    _Bool _entitlementVerified;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_containerID;
    NSSet *_identifiers;
    NSExtension *_extension;
    NSString *_containerPath;
    NSString *_extensionID;
}

@property(nonatomic) _Bool entitlementVerified; // @synthesize entitlementVerified=_entitlementVerified;
@property(retain, nonatomic) NSString *extensionID; // @synthesize extensionID=_extensionID;
@property(retain, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(copy) NSSet *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)performJob:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_performJob:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_verifyIntegrityWithHostContext:(id)arg1;
@property(readonly) _Bool dontRunDuringMigration;
@property(readonly) _Bool isInternal;
@property(readonly) _Bool isEnabled;
- (id)description;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4;

@end

