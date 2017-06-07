//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@protocol FlickrComposeOptionViewDelegate;

@interface FlickrAudienceController : UITableViewController
{
    int _audience;
    id <FlickrComposeOptionViewDelegate> _delegate;
}

+ (id)titleForAudience:(int)arg1;
@property(nonatomic) __weak id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int audience; // @synthesize audience=_audience;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct CGSize)preferredContentSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadView;
- (id)init;

@end

