//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, HDSQLiteDatabase, HDSQLitePredicate, HDSQLiteQueryStatement, NSUUID;

@interface _HDAssociationInsertionContext : NSObject
{
    _Bool _enforceSameSource;
    _Bool _permitPendingAssociations;
    NSUUID *_parentUUID;
    HDProfile *_profile;
    HDSQLiteDatabase *_database;
    HDSQLitePredicate *_predicateForParent;
    HDSQLiteQueryStatement *_lookupByUUIDStatement;
}

@property(readonly, nonatomic) HDSQLiteQueryStatement *lookupByUUIDStatement; // @synthesize lookupByUUIDStatement=_lookupByUUIDStatement;
@property(readonly, nonatomic) HDSQLitePredicate *predicateForParent; // @synthesize predicateForParent=_predicateForParent;
@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _Bool permitPendingAssociations; // @synthesize permitPendingAssociations=_permitPendingAssociations;
@property(readonly, nonatomic) _Bool enforceSameSource; // @synthesize enforceSameSource=_enforceSameSource;
@property(readonly, copy, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (void).cxx_destruct;
- (void)finish;
- (id)initWithParentUUID:(id)arg1 enforceSameSource:(_Bool)arg2 permitPendingAssociations:(_Bool)arg3 profile:(id)arg4 database:(id)arg5;

@end

