//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, UIImage, WKActionSheetAssistant, _WKActivatedElementInfo;

@protocol WKActionSheetAssistantDelegate <NSObject>
- (RetainPtr_f649c0c3)actionSheetAssistant:(WKActionSheetAssistant *)arg1 decideActionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(RetainPtr_f649c0c3)arg3;
- (_Bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shareElementWithURL:(NSURL *)arg2 rect:(struct CGRect)arg3;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 openElementAtLocation:(struct CGPoint)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 performAction:(int)arg2;
- (optional_b0042d51)positionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@optional
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 getAlternateURLForImage:(UIImage *)arg2 completion:(void (^)(NSURL *, NSDictionary *))arg3;
- (NSString *)selectedTextForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (NSDictionary *)dataDetectionContextForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (void)actionSheetAssistantDidStopInteraction:(WKActionSheetAssistant *)arg1;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 willStartInteractionWithElement:(_WKActivatedElementInfo *)arg2;
- (void)updatePositionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (_Bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
@end

