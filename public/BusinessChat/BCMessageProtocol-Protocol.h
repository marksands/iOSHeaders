//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSAttributedString, NSData, NSString, NSURL, UIImage;

@protocol BCMessageProtocol
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, nonatomic) long long style;
@property(readonly, nonatomic) long long type;
@property(retain, nonatomic) NSString *accessibilityLabel;
@property(retain, nonatomic) NSString *subcaption;
@property(retain, nonatomic) NSString *summaryText;
@property(readonly, nonatomic) NSString *messageGUID;
@property(retain, nonatomic) NSAttributedString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(NSData *)arg1 url:(NSURL *)arg2 messageGUID:(NSString *)arg3 isFromMe:(_Bool)arg4;
- (id)initWithData:(NSData *)arg1 url:(NSURL *)arg2 messageGUID:(NSString *)arg3;
@end

