//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DAUserNotificationInfo : NSObject
{
    CDUnknownBlockType _handler;
    NSString *_groupIdentifier;
}

@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (CDUnknownBlockType)handler;
- (void)setHandler:(CDUnknownBlockType)arg1;

@end

