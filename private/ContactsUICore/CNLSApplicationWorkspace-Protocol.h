//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNApplicationProxy, CNObservable, NSArray, NSDictionary, NSString, NSUserActivity;
@protocol CNSchedulerProvider;

@protocol CNLSApplicationWorkspace <NSObject>
- (void)openUserActivity:(NSUserActivity *)arg1 inApplication:(CNApplicationProxy *)arg2 options:(NSDictionary *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (CNApplicationProxy *)applicationForBundleIdentifier:(NSString *)arg1;
- (NSArray *)applicationsForUserActivityType:(NSString *)arg1;
- (NSArray *)applicationsAvailableForHandlingURLScheme:(NSString *)arg1;
- (CNObservable *)observableForApplicationsChangedWithSchedulerProvider:(id <CNSchedulerProvider>)arg1;
@end

