//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FMViewController : UIViewController
{
    NSMutableDictionary *_kvoObservationTokens;
    NSMutableSet *_notificationTokens;
}

@property(retain, nonatomic) NSMutableSet *notificationTokens; // @synthesize notificationTokens=_notificationTokens;
@property(retain, nonatomic) NSMutableDictionary *kvoObservationTokens; // @synthesize kvoObservationTokens=_kvoObservationTokens;
- (void).cxx_destruct;
- (id)actualNibNameForName:(id)arg1;
@property(readonly, copy) NSString *controllerNibName;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)removeNotificationTokens;
- (void)addNotificationToken:(id)arg1;
- (void)removeKVOObservationTokens;
- (void)addKVOObservationToken:(id)arg1 forObject:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

