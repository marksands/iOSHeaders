//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DOCServiceTransitionProtocol <NSObject>
- (void)endTransition;
- (void)startTransition;
- (void)getDisplayInformationWithCompletionBlock:(void (^)(UIImage *, unsigned long long, struct CGRect))arg1;
- (void)setHasProgress:(_Bool)arg1 loadingFractionCompleted:(double)arg2 setIsIndeterminate:(_Bool)arg3;
@end

