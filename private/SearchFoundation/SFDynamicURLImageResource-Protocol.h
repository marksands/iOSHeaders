//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFDynamicURLImageResource <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *imageOptions;
@property(nonatomic) _Bool supportsResizing;
@property(copy, nonatomic) NSString *formatURL;
@property(nonatomic) double pixelHeight;
@property(nonatomic) double pixelWidth;
@end

