//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class LSAppLink, NSData, NSDictionary, NSString, NSURL, NSUUID, _LSAppLinkOpenState;

@protocol _LSDOpenProtocol
- (void)failedToOpenApplication:(NSString *)arg1 withURL:(NSURL *)arg2;
- (void)getAppLinkOpenStrategyForBundleIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, long long, NSError *))arg2;
- (void)setAppLinkOpenStrategy:(long long)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)openAppLink:(LSAppLink *)arg1 state:(_LSAppLinkOpenState *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)resolveAppLinksForURL:(NSURL *)arg1 limit:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)canOpenURL:(NSURL *)arg1 publicSchemes:(_Bool)arg2 privateSchemes:(_Bool)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)openUserActivityWithUniqueIdentifier:(NSUUID *)arg1 activityData:(NSData *)arg2 activityType:(NSString *)arg3 bundleIdentifier:(NSString *)arg4 options:(NSDictionary *)arg5 completionHandler:(void (^)(_Bool, NSError *))arg6;
- (void)openURL:(NSURL *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)openApplicationWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)performOpenOperationWithURL:(NSURL *)arg1 applicationIdentifier:(NSString *)arg2 documentIdentifier:(NSString *)arg3 sourceIsManaged:(_Bool)arg4 userInfo:(NSDictionary *)arg5 options:(NSDictionary *)arg6 delegate:(id <LSOpenResourceOperationDelegate>)arg7 completionHandler:(void (^)(_Bool, NSError *))arg8;
@end

