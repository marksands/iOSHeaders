//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PVNotification : NSObject
{
    NSString *_name;
    id _details;
}

+ (id)notificationWithName:(id)arg1 details:(id)arg2;
+ (id)notificationWithName:(id)arg1;
@property(readonly) id details; // @synthesize details=_details;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 details:(id)arg2;

@end

