//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SocksHandshake : NSObject
{
    _Bool _finished;
    unsigned short _port;
    NSString *_host;
    NSDictionary *_credentials;
}

+ (id)socksHadshakeWithVersion:(int)arg1;
@property(retain) NSDictionary *credentials; // @synthesize credentials=_credentials;
@property unsigned short port; // @synthesize port=_port;
@property(retain) NSString *host; // @synthesize host=_host;
@property _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (id)finish:(int)arg1;
- (_Bool)parse:(const char *)arg1 len:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

