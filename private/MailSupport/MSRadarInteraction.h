//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIAlertController;

@interface MSRadarInteraction : NSObject
{
    NSURL *_radarURL;
    NSString *_title;
    NSString *_message;
    NSString *_openButtonTitle;
    CDUnknownBlockType _openHandler;
    NSString *_cancelButtonTitle;
    CDUnknownBlockType _cancelHandler;
    NSString *_maybeLaterButtonTitle;
    CDUnknownBlockType _maybeLaterHandler;
}

+ (id)interactionWithTitle:(id)arg1 message:(id)arg2 builder:(CDUnknownBlockType)arg3;
+ (id)interactionWithTitle:(id)arg1 message:(id)arg2 radarURL:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType maybeLaterHandler; // @synthesize maybeLaterHandler=_maybeLaterHandler;
@property(copy, nonatomic) NSString *maybeLaterButtonTitle; // @synthesize maybeLaterButtonTitle=_maybeLaterButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType openHandler; // @synthesize openHandler=_openHandler;
@property(copy, nonatomic) NSString *openButtonTitle; // @synthesize openButtonTitle=_openButtonTitle;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *radarURL; // @synthesize radarURL=_radarURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIAlertController *interactionViewController;
- (id)initWithTitle:(id)arg1 message:(id)arg2 radarURL:(id)arg3;

@end

