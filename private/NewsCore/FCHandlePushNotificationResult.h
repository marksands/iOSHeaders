//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying>
{
    _Bool _handled;
    NSSet *_recordZoneIDs;
}

@property(retain, nonatomic) NSSet *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(nonatomic, getter=wasHandled) _Bool handled; // @synthesize handled=_handled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

