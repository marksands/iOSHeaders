//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SKUIClientContext, UIImage, UIViewController;

@interface SKUIReviewInAppConfiguration : NSObject
{
    _Bool _sandboxed;
    NSString *_itemID;
    NSString *_title;
    UIViewController *_viewController;
    SKUIClientContext *_clientContext;
    NSString *_customDescription;
    UIImage *_icon;
}

@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;

@end

