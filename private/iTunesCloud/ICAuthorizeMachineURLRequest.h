//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSData, NSString;

@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest
{
    NSString *_keybagPath;
    NSString *_reason;
    NSData *_tokenData;
}

@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *keybagPath; // @synthesize keybagPath=_keybagPath;
- (void).cxx_destruct;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

