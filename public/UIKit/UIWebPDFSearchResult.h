//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject
{
    NSArray *rotationAngles;
    unsigned long long pageIndex;
    NSArray *strings;
    NSString *string;
    NSArray *rects;
    struct CGRect boundingBox;
}

@property(retain, nonatomic) NSArray *rects; // @synthesize rects;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox;
@property(retain, nonatomic) NSString *string; // @synthesize string;
@property(retain, nonatomic) NSArray *strings; // @synthesize strings;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex;
@property(retain, nonatomic) NSArray *rotationAngles; // @synthesize rotationAngles;
- (id)description;
- (void)dealloc;

@end

