//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/NUPageNextActionable-Protocol.h>
#import <NewsUI/NUPageStyling-Protocol.h>

@class NSString, UIViewController;
@protocol NUPagable;

@protocol NUPage <NUPageStyling, NUPageNextActionable, NUAdContextProvider>
@property(readonly, nonatomic) _Bool allowNeighboringAdvertising;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)activityProvider:(void (^)(id <NUActivityProvider>))arg1;
- (UIViewController<NUPagable> *)viewController;
- (void)unprepare;
- (void)prepare;
@end

