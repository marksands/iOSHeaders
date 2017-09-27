//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDate, NSString, UIDateLabel, UIImage, UIImageView, UILabel;

@interface CKStarkConversationListCell : UITableViewCell
{
    UIImage *_monogramImage;
    UIImageView *_unreadImageView;
    UILabel *_recipientsLabel;
    UIDateLabel *_dateLabel;
}

+ (double)starkCellMarginWidth;
@property(retain, nonatomic) UIDateLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *recipientsLabel; // @synthesize recipientsLabel=_recipientsLabel;
@property(retain, nonatomic) UIImageView *unreadImageView; // @synthesize unreadImageView=_unreadImageView;
@property(nonatomic) UIImage *monogramImage; // @synthesize monogramImage=_monogramImage;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recipientNames; // @dynamic recipientNames;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(nonatomic) _Bool hasUnreadMessages; // @dynamic hasUnreadMessages;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

