//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface BBObserverGatewayAddBulletinRequest : NSObject
{
    NSString *_bulletinID;
    NSString *_sectionID;
    NSDate *_timeout;
    CDUnknownBlockType _timeoutHandler;
}

@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(retain, nonatomic) NSDate *timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
- (void).cxx_destruct;

@end

