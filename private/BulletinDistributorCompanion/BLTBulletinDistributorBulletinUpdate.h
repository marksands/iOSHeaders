//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBBulletin;

@interface BLTBulletinDistributorBulletinUpdate : NSObject
{
    unsigned long long _updateType;
    BBBulletin *_bulletin;
    unsigned long long _feed;
}

+ (id)bulletinUpdateWithType:(unsigned long long)arg1 bulletin:(id)arg2 feed:(unsigned long long)arg3;
@property(nonatomic) unsigned long long feed; // @synthesize feed=_feed;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
- (void).cxx_destruct;

@end

