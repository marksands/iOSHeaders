//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface NWRemoteConnectionWriteRequest : NSObject
{
    NSData *_data;
    NSUUID *_clientID;
}

@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 clientID:(id)arg2;

@end

