//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

@interface HMDXPCRequest : HMFObject
{
    NSDate *_startTime;
    NSString *_messageName;
    CDUnknownBlockType _responseHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)initWithMessageName:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end

