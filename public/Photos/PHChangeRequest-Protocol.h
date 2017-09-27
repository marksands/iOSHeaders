//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectID, NSObject<OS_xpc_object>, NSSet, NSString;

@protocol PHChangeRequest <NSObject>
@property(readonly, nonatomic) int clientProcessID;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithXPCDict:(NSObject<OS_xpc_object> *)arg1 clientEntitlements:(NSSet *)arg2 clientName:(NSString *)arg3 clientBundleID:(NSString *)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(NSString *)arg1 objectID:(NSManagedObjectID *)arg2;
@end

