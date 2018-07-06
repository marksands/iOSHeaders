//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDictionary;

@protocol LAContextServerEvaluationProt
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 originator:(id <LAOriginatorProt>)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)resetEvent:(long long)arg1 originator:(id <LAOriginatorProt>)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)retryEvent:(long long)arg1 originator:(id <LAOriginatorProt>)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)setCredential:(NSData *)arg1 type:(long long)arg2 originator:(id <LAOriginatorProt>)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)isCredentialSet:(long long)arg1 originator:(id <LAOriginatorProt>)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)evaluateACL:(NSData *)arg1 operation:(id)arg2 options:(NSDictionary *)arg3 uiDelegate:(id <LAUIDelegate>)arg4 originator:(id <LAOriginatorProt>)arg5 reply:(void (^)(NSDictionary *, NSError *))arg6;
- (void)evaluatePolicy:(long long)arg1 options:(NSDictionary *)arg2 uiDelegate:(id <LAUIDelegate>)arg3 originator:(id <LAOriginatorProt>)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
@end

