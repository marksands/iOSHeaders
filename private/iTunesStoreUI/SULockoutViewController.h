//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSBundle, NSString, UIImage;

@interface SULockoutViewController : SUViewController
{
    UIImage *_image;
    NSBundle *_localizationBundle;
    NSString *_messageBody;
    NSString *_messageTitle;
}

@property(retain, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(retain, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic) NSBundle *localizationBundle; // @synthesize localizationBundle=_localizationBundle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)loadView;
- (id)copyArchivableContext;
- (void)dealloc;
- (id)init;

@end

