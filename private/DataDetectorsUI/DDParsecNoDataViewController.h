//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL, UILabel, UIView;

@interface DDParsecNoDataViewController : UIViewController
{
    UIView *_container;
    UILabel *_errorLabel;
    _Bool _inPlatter;
    NSString *_reason;
    NSString *_searchWebQuery;
    NSURL *_altURL;
}

@property(nonatomic) _Bool inPlatter; // @synthesize inPlatter=_inPlatter;
@property(retain) NSURL *altURL; // @synthesize altURL=_altURL;
@property(retain) NSString *searchWebQuery; // @synthesize searchWebQuery=_searchWebQuery;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)manageDictionaries:(id)arg1;
- (id)manageDictionariesURL;
- (void)searchWeb:(id)arg1;
- (void)loadView;

@end

