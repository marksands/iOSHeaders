//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HFUserHandle : NSObject
{
    NSString *_userID;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 userID:(id)arg2;
- (id)init;

@end

