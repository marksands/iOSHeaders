//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class NSMutableArray, NSString;

@interface HKDataMetadataSimpleSection : HKDataMetadataSection
{
    NSString *_title;
    NSMutableArray *_rows;
}

@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)addText:(id)arg1 detail:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end

