//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface BKIdentity : NSObject
{
    unsigned int _userID;
    NSUUID *_uuid;
    long long _type;
    NSString *_name;
    NSDate *_creationTime;
}

+ (id)identity;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)serverIdentity;
- (id)initWithDeviceIdentity:(id)arg1;

@end

