//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSWPHyperlinkSelection;

__attribute__((visibility("hidden")))
@interface TSWPArchivedHyperlinkSelection : TSPObject <TSKArchivedSelection>
{
    TSWPHyperlinkSelection *_hyperlinkSelection;
}

@property(retain, nonatomic) TSWPHyperlinkSelection *hyperlinkSelection; // @synthesize hyperlinkSelection=_hyperlinkSelection;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSKSelection *selection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

