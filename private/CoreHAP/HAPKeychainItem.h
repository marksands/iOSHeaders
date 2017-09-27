//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSData, NSDate, NSNumber, NSString;

@interface HAPKeychainItem : HMFObject
{
    _Bool _syncable;
    _Bool _invisible;
    NSString *_accessGroup;
    NSNumber *_type;
    NSString *_label;
    NSString *_itemDescription;
    NSString *_account;
    NSData *_valueData;
    void *_platformReference;
    NSData *_genericData;
    NSString *_viewHint;
    NSDate *_creationDate;
}

@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *viewHint; // @synthesize viewHint=_viewHint;
@property(retain, nonatomic) NSData *genericData; // @synthesize genericData=_genericData;
@property(nonatomic) void *platformReference; // @synthesize platformReference=_platformReference;
@property(readonly, nonatomic, getter=isInvisible) _Bool invisible; // @synthesize invisible=_invisible;
@property(nonatomic, getter=isSyncable) _Bool syncable; // @synthesize syncable=_syncable;
@property(retain, nonatomic) NSData *valueData; // @synthesize valueData=_valueData;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithQueryResult:(struct __CFDictionary *)arg1 shouldIncludeData:(_Bool)arg2;
- (id)description;

@end

