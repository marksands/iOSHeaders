//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/SXActionHandlerDelegate-Protocol.h>

@class NSURL, SXActionHandler;

@protocol SXLinkActionHandlerDelegate <SXActionHandlerDelegate>
- (void)linkActionHandlerWantsToOpenInAppURL:(SXActionHandler *)arg1;

@optional
- (_Bool)linkActionHandler:(SXActionHandler *)arg1 allowOpeningOfURLInSafari:(NSURL *)arg2;
- (NSURL *)linkActionHandler:(SXActionHandler *)arg1 presentableURLForURL:(NSURL *)arg2;
@end

