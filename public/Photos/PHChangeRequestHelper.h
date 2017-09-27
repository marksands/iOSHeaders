//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSManagedObjectID, NSMutableDictionary, NSMutableSet, NSString;

@interface PHChangeRequestHelper : NSObject
{
    _Bool _isMutated;
    _Bool _isNew;
    NSMutableDictionary *_mutations;
    NSMutableSet *_nilMutations;
    id _changeRequest;
    NSString *_uuid;
    NSString *_uuidSaveToken;
    NSManagedObjectID *_objectID;
    NSError *_placeholderRequestError;
}

+ (id)changeRequestWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
+ (id)changeRequestForObject:(id)arg1;
@property(readonly, nonatomic) NSError *placeholderRequestError; // @synthesize placeholderRequestError=_placeholderRequestError;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) NSString *uuidSaveToken; // @synthesize uuidSaveToken=_uuidSaveToken;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id changeRequest; // @synthesize changeRequest=_changeRequest;
@property(readonly, nonatomic) NSMutableSet *nilMutations; // @synthesize nilMutations=_nilMutations;
@property(readonly, nonatomic) NSMutableDictionary *mutations; // @synthesize mutations=_mutations;
- (void).cxx_destruct;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
@property(nonatomic, getter=isNew) _Bool new;
@property(nonatomic, getter=isMutated) _Bool mutated;
- (void)didMutate;
- (_Bool)_validateOrGenerateUUIDWithClientEntitled:(_Bool)arg1 changeRequest:(id)arg2;
- (_Bool)_generateUUIDIfNecessary:(id *)arg1;
- (id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (id)init;
- (id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 clientEntitlements:(id)arg3;
- (id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2;
- (id)initForNewObjectWithChangeRequest:(id)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3;

@end

