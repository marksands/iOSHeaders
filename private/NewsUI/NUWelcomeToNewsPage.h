//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUPage.h"

@class NSString, NUPageStyle, NUWelcomeToNewsViewController;

@interface NUWelcomeToNewsPage : NSObject <NUPage>
{
    id <NURouter> _router;
    NUWelcomeToNewsViewController *_welcomeToNewsViewController;
    unsigned long long _pageNextAction;
    NUPageStyle *_pageStyle;
}

@property(retain, nonatomic) NUPageStyle *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(nonatomic) unsigned long long pageNextAction; // @synthesize pageNextAction=_pageNextAction;
@property(retain, nonatomic) NUWelcomeToNewsViewController *welcomeToNewsViewController; // @synthesize welcomeToNewsViewController=_welcomeToNewsViewController;
@property(readonly, nonatomic) id <NURouter> router; // @synthesize router=_router;
- (void).cxx_destruct;
- (void)pageStyling:(CDUnknownBlockType)arg1;
- (void)activityProvider:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool allowNeighboringAdvertising;
- (void)unprepare;
- (void)prepare;
- (id)viewController;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithRouter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

