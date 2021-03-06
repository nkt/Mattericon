//
//  HeaderView.m
//  UXMaterial
//
//  Created by Anton Bukov on 05.10.15.
//  Copyright © 2015 @k06a. All rights reserved.
//

#import <Masonry/Masonry.h>
#import "TitleHeader.h"

@interface TitleHeader ()

@property (nonatomic, strong) UXView *separatorView;

@end

@implementation TitleHeader

- (UXLabel *)titleLabel
{
    if (_titleLabel == nil) {
        _titleLabel = [[UXLabel alloc] init];
        _titleLabel.textColor = [NSColor colorWithWhite:0x75/255. alpha:1.0];
        _titleLabel.centerVertically = YES;
        _titleLabel.font = [NSFont systemFontOfSize:20];
        
        [self addSubview:_titleLabel];
        [_titleLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self).with.insets(NSEdgeInsetsMake(0, 6, 0, 0));
        }];
    }
    return _titleLabel;
}

- (UXView *)separatorView
{
    if (_separatorView == nil) {
        _separatorView = [[UXView alloc] init];
        _separatorView.backgroundColor = [NSColor colorWithWhite:220/255. alpha:1.0];
        
        [self addSubview:_separatorView];
        [_separatorView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.leading.equalTo(@6);
            make.trailing.equalTo(@(-6));
            make.bottom.equalTo(@0);
            make.height.equalTo(@1);
        }];
    }
    return _separatorView;
}

- (void)viewDidMoveToSuperview
{
    [super viewDidMoveToSuperview];
    //self.backgroundColor = [NSColor colorWithWhite:220/255. alpha:1.0];
    [self titleLabel];
    [self separatorView];
}

@end
