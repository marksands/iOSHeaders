//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, NUANFEndOfArticleTopicButton;

@interface NUANFEndOfArticleTopicCollectionViewCell : UICollectionViewCell
{
    NSString *_topicTitle;
    id <NUANFEndOfArticleTopicCollectionViewCellDelegate> _delegate;
    NUANFEndOfArticleTopicButton *_topicButton;
}

@property(readonly, nonatomic) NUANFEndOfArticleTopicButton *topicButton; // @synthesize topicButton=_topicButton;
@property(nonatomic) __weak id <NUANFEndOfArticleTopicCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
- (void).cxx_destruct;
- (void)topicButtonWasTapped:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

