//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKTranscriptCell.h>

@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell
{
    UIView *_loadingIndicator;
}

+ (double)defaultCellHeight;
@property(retain, nonatomic) UIView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void).cxx_destruct;
- (void)startAnimatingActivityIndicator;
- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

