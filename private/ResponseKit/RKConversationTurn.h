//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface RKConversationTurn : NSObject
{
    NSString *_text;
    NSString *_senderId;
    NSDate *_timestamp;
}

@property(readonly) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSString *senderId; // @synthesize senderId=_senderId;
@property(readonly) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3;

@end

