//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TouchRemote/TROperation.h>

@interface TRNetworkOperation : TROperation
{
    CDUnknownBlockType _sendingWiFiInfoHandler;
}

@property(copy, nonatomic) CDUnknownBlockType sendingWiFiInfoHandler; // @synthesize sendingWiFiInfoHandler=_sendingWiFiInfoHandler;
- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (void)_sendRequestWithSSID:(id)arg1 password:(id)arg2;
- (void)execute;

@end

