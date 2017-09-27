//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DATrustHandler : NSObject
{
    id <DATrustHandlerDelegate> _delegate;
    NSMutableDictionary *_haveWarnedAboutCertDict;
}

@property(retain, nonatomic) NSMutableDictionary *haveWarnedAboutCertDict; // @synthesize haveWarnedAboutCertDict=_haveWarnedAboutCertDict;
@property(nonatomic) __weak id <DATrustHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)handleTrustChallenge:(id)arg1 forAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)handleTrustChallenge:(id)arg1 forAccount:(id)arg2;
- (void)handleTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 forAccount:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)_serverSuffixesToAlwaysFail;
- (int)_actionForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;
- (_Bool)resetCertWarnings;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (_Bool)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

