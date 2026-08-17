# BW Risk Assessment
**2026-08-17 ~10:4x ET (Monday) — first BW read since 2026-08-14, three-calendar-day-stale desk catching up on a live book**

## Overall Portfolio Risk Grade: D+ (down from C- on 8/14)
## Single Biggest Risk Right Now
**The market is pricing zero fear (VIX 14.25, the lowest print of 2026, "growing investor complacency" per this morning's coverage) at the exact moment this book carries its widest-ever true AI/semis look-through exposure into a binary NVDA print 9 days out.** Recomputed properly this run (see §1/§2), NVDA's *effective* exposure — direct position plus its 6.7% weight inside VTI — is **~14.94% of equity, not the 12.48% the standing single-name trigger nominally tracks**. That's still under the 18-20% cap, but the cap itself has been measuring the wrong number for weeks. Layer on: total look-through Tech/AI exposure across NVDA+VTI+VXUS is **~30.1% of equity**, CRWD (also reporting 8/26) sits unhedged in the same calendar window on GS's list, and the VIX sitting at a 2026 low heading into the historically volatile mid-August-to-mid-October stretch is a mean-reversion setup, not a stable state. None of this fires an existing trigger. All of it is real, and none of it was visible in the 8/14 read.

---

## Heat map summary

| Risk factor | Level | Trend | Note |
|---|---|---|---|
| Single-name concentration (NVDA, nominal) | 🟡 Medium | → flat | 12.48% equity / 11.02% pool, below 18-20% trigger |
| Single-name concentration (NVDA, **true look-through**) | 🟠 Medium-High | ↑ newly quantified | ~14.94% equity once VTI's embedded 6.7% NVDA weight is added — see §1 |
| Combined satellite concentration (NVDA+OMCL) | 🟡 Medium | → flat | 21.04% equity, 3.96pp buffer to 25% trigger |
| Sector concentration (Tech/AI, look-through) | 🔴 High | ↑ newly quantified | ~30.1% of equity across NVDA+VTI+VXUS — see §2 |
| Geographic/currency exposure | 🟢 Low-Medium | → flat | VXUS provides genuine diversification, ~30.2% equity |
| Interest rate sensitivity | 🟡 Medium | → flat | 10yr 4.69% (8/17), eased 1bp, rule 6a untested |
| Recession stress test (weighted drawdown) | 🟠 Medium-High | → flat | Est. ~-31% of equity value in a moderate recession — see §5 |
| Liquidity risk | 🟢 Low | → flat | All five holdings trade in deep, liquid markets |
| Market-wide complacency (VIX) | 🔴 High | ↑ new flag | VIX 14.25, 2026 low, entering seasonally volatile window |
| Tail risk — NVDA/CRWD earnings (8/26, 9 days out) | 🟠 Medium-High | ↑ closer | Two book-adjacent binary catalysts same day, no hedge in place |
| Tail risk — Hormuz/oil geopolitical | 🟡 Medium | → flat | Still unsigned; XLE already the book's partial hedge |
| Liquidity of trading pool itself | 🟢 Low | → flat | $6.00 deployable cash, 11.74% of pool, un-deployed |

---

## 1. Correlation analysis between holdings

| Pair | Estimated correlation | Basis |
|---|---|---|
| NVDA ↔ VTI | High (~0.6-0.8) | NVDA is VTI's #1 holding at 6.7% of the fund — VTI is not an independent diversifier from NVDA, it's a partial NVDA amplifier |
| NVDA ↔ VXUS | Medium (~0.4-0.5) | Global semis/AI theme co-moves with US mega-cap tech in risk-on/risk-off regimes, but VXUS's own tech weight is smaller and its composition (financials, industrials) differs |
| VTI ↔ VXUS | High (~0.7-0.8) | Both are broad, cap-weighted equity baskets; correlation rises further in broad risk-off events (the 8/3 and prior multi-factor shocks moved both together) |
| NVDA ↔ OMCL | Low (~0.1-0.2) | Healthcare IT has its own earnings/reimbursement drivers, largely uncorrelated with chip/AI catalysts — genuine diversifier, as previously validated |
| NVDA ↔ XLE | Low-to-negative (~0.0 to -0.2) | Energy is driven by oil/geopolitics, not AI capex; this is the book's one position that reliably zigs when NVDA-linked tech zags |
| VTI ↔ XLE | Low (~0.1-0.3) | XLE is ~2.9% of VTI itself, so there's a small embedded overlap, but energy vs. broad-market beta diverges in most regimes |
| OMCL ↔ XLE | ~0 | No structural linkage identified; the book's two true idiosyncratic satellites move independently of each other |

**Read:** the book's stated "five positions" is really closer to three independent risk clusters — (a) a large, tightly-correlated US/AI-tech cluster (NVDA+VTI, and to a lesser extent VXUS), (b) one genuine diversifier (OMCL), and (c) one partial hedge against (a) that has its own independent geopolitical tail (XLE). Diversification here is real but narrower than five tickers suggests.

## 2. Sector concentration risk (look-through)

- **NVDA direct:** 12.48% of equity (100% semis/AI)
- **VTI's embedded Tech sector weight:** 36.3% of VTI (current fact sheet) × 36.78% equity weight = **13.53% of equity in Tech via VTI alone**
- **VTI's embedded NVDA weight specifically:** 6.7% of VTI × 36.78% equity weight = **2.46% of equity is NVDA hiding inside the "core" sleeve**
- **VXUS's Tech look-through:** international tech weight is materially lower than the US (~13-15% estimated, ex-US indices are financials/industrials-heavier) × 30.22% equity weight ≈ **4.2% of equity**
- **Total Tech/AI look-through across the book: NVDA (12.48%) + VTI-Tech (13.53%) + VXUS-Tech (4.2%) ≈ 30.1% of equity value** — essentially a third of this book's equity is one sector bet, split across three tickers that look diversified on a position list but aren't on a sector basis.
- **True NVDA exposure (direct + embedded in VTI): 12.48% + 2.46% = ~14.94% of equity** — this is the number that should be tracked against the 18-20% single-name trigger, not the 12.48% direct-only figure state.md has been using. It's still under the cap (3-5pp of remaining buffer, not 5.5-7.5pp), but the buffer is smaller than the book has been assuming.
- OMCL (healthcare IT) and XLE (energy) are the only two holdings outside this cluster, together **20.5% of equity** — the actual non-Tech diversification in this book is thinner than the five-name position list implies.

**This is not a new trade signal** (no structural break, rule 1 applies) — it's a measurement correction. Recommend BR and the trader update the standing NVDA concentration trigger to track look-through exposure (direct + VTI-embedded), not direct-only, going forward.

## 3. Geographic exposure and currency risk

- **US exposure:** NVDA + VTI + OMCL + XLE = 69.79% of equity, 100% USD-denominated, no currency risk on these four.
- **Ex-US exposure:** VXUS alone, 30.22% of equity — developed + emerging markets ex-US, unhedged currency exposure (USD strength/weakness flows through directly to VXUS returns for a USD-based investor).
- **Read:** VXUS is genuinely the book's only geographic/currency diversifier, and it's a meaningful ~30% slice — this remains a real structural positive, unchanged from prior reads. No new currency-specific catalyst this run (no fresh DXY move sourced).

## 4. Interest rate sensitivity per position

| Position | Duration/rate sensitivity | Note |
|---|---|---|
| NVDA | High | Long-duration growth cash flows, DCF-sensitive to discount-rate moves (MS's own model uses an 11% WACC) |
| VTI | Medium-High | Cap-weighted, so it inherits NVDA/mega-cap-tech's own rate sensitivity at the index level |
| VXUS | Medium | More value/financials-tilted than VTI internationally, somewhat less rate-sensitive, but not immune |
| OMCL | Medium | Small-cap growth healthcare IT — small caps as a class carry above-average rate sensitivity via financing costs |
| XLE | Low | Energy cash flows are commodity-price-driven, not discount-rate-driven; the low-duration hedge role stands |

10-year Treasury: **4.69%** as of 8/17 (eased ~1bp vs. 8/14's read). Rule 6a's 4.75%/two-consecutive-closes trigger remains untested — still below threshold, no action required. Worth flagging: nothing about today's rate print is elevated, but four of the book's five positions (all but XLE) carry meaningful rate sensitivity, so a rate shock scenario would not be diversified away by anything except XLE and the cash sleeve.

## 5. Recession stress test — estimated drawdown

Applying conservative sector-historical recession-drawdown assumptions to current equity weights:

| Position | Equity weight | Assumed recession drawdown | Weighted contribution |
|---|---|---|---|
| NVDA | 12.48% | -45% (cyclical semis; 2022 bear saw comparable names down 55-65%) | -5.62pp |
| VTI | 36.78% | -27% (broad-market recession average, tech-tilted index) | -9.93pp |
| VXUS | 30.22% | -30% (higher-beta international cyclicals/EM in a global slowdown) | -9.07pp |
| OMCL | 8.56% | -25% (small-cap growth, healthcare defensiveness only partially offsets small-cap beta) | -2.14pp |
| XLE | 11.97% | -35% (demand-destruction scenario for energy in a recession) | -4.19pp |

**Estimated weighted equity drawdown: ~-31.0%** → equity value $45.11 → ~$13.98 loss → equity falls to ~$31.13, pool (equity + deployable cash) falls from $51.11 to ~$37.13, a **~27.4% pool-level drawdown**. The $50 off-limits reserve is structurally untouched in this scenario (it's cash), which caps the account-level (not pool-level) damage — worth restating plainly: the reserve is doing real risk-management work here, not just sitting idle.

Consensus recession-probability estimates for 2026 remain moderate — Bloomberg ~30%, Moody's ~42%, WSJ survey ~25%, RSM ~30% (down from 40%), prediction markets ~7.5% odds by year-end. **This is not the base case**, but a ~25-40% probability of a scenario producing a ~27% pool drawdown is not a tail risk this book can treat as remote.

## 6. Liquidity risk rating

| Position | Rating | Note |
|---|---|---|
| NVDA | 🟢 Very liquid | Mega-cap, deepest options/equity market in the book (though this desk doesn't trade options) |
| VTI | 🟢 Very liquid | One of the largest US ETFs by AUM, minimal bid/ask friction |
| VXUS | 🟢 Very liquid | Large international ETF, tight spreads |
| OMCL | 🟡 Moderate | Small/mid-cap single name — thinner order book than the ETFs, could see wider slippage on a fast exit, though the book's own position size ($3.86) is far too small to move the market itself |
| XLE | 🟢 Very liquid | Large, heavily-traded sector ETF |

No liquidity risk is currently binding — every position could be exited without material slippage at this book's size. Flagging OMCL as the one name to watch if this book's dollar size grows materially.

## 7. Single stock risk and position sizing recommendations

- **NVDA** is the only true single-stock idiosyncratic risk of size once look-through is corrected (~14.94% true exposure, see §2) — recommend the standing single-name trigger be redefined to this look-through basis, and recommend the trader treat the NVDA earnings contingency plan (state.md, written 8/14) as covering the *look-through* exposure, not just the direct position, when it fires post-8/26.
- **OMCL** at 8.56% of equity is a well-sized, genuinely idiosyncratic satellite — no sizing concern.
- **XLE** at 11.97% of equity is appropriately sized as a partial hedge/satellite; no concern.
- No position individually breaches any risk-based sizing cap this run. The sizing concern is structural (look-through Tech concentration, §2), not any single line item.

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 30 days) | Estimated book impact |
|---|---|---|
| NVDA and/or CRWD deliver a "beat but sell off" print on 8/26 (JPM's own base case pattern: 3 of last 4 reactions negative despite beats) | ~50-60% for a negative next-day reaction | NVDA-specific: could be -5% to -15% on the stock; book-level, blunted by NVDA's small absolute size (~$5.63) unless VTI's embedded weight amplifies it |
| A genuine structural break at the NVDA print (guidance cut, confirmed unfavorable OpenAI financing term, China shock) | ~10-15% | Would fire the existing contingency plan's trim/exit trigger — the plan exists precisely for this tail |
| VIX mean-reverts sharply higher (from today's 2026-low 14.25) during the seasonally volatile Aug-Oct window, independent of any single catalyst | ~30-40% historically for this calendar window | Broad correlated hit to NVDA+VTI+VXUS simultaneously (§1's correlated cluster) — the scenario the book's diversification is weakest against |
| Hormuz/Iran-Oman talks break down or a new strike occurs | ~20-25% (unsigned, "final stage" language has persisted for weeks with recurring complications) | Oil spike scenario — XLE benefits, everything else (especially VXUS, rate-sensitive names) likely hit; net book impact ambiguous, partially self-hedging |
| Recession materializes within 12 months | ~25-40% per surveyed consensus (§5) | ~-31% weighted equity drawdown per the stress test above |
| Broader AI-capex/circular-financing systemic scare (beyond just NVDA — the same theme hitting the ~36% AI-weighted Morningstar US index per BR's prior sourcing) | ~10-15% for a market-wide (not just NVDA) repricing event | Would hit VTI's Tech weight directly, not just the discrete NVDA position — this is the scenario where the §2 look-through math matters most, since it wouldn't stay contained to the "12.48%" nominal NVDA line |

## 9. Hedging strategies for the top 3 risks (equities-only toolbox — no options)

**Risk #1: True NVDA/AI look-through concentration (~30.1% of equity, §2).**
Without options, the only real levers are position sizing and basket diversification. Recommend the trader consider, at the next discretionary sizing decision, directing new satellite capital toward a *non-Tech* idea (OMCL-style diversifier, or GS's healthcare/other-sector pipeline candidates once they clear rule 6) rather than any further Tech/AI-adjacent name (CRWD, IONQ), even though both are Street-strengthening — adding a fourth Tech-adjacent satellite would deepen exactly the concentration this section just quantified.

**Risk #2: Market-wide complacency / VIX mean-reversion into a correlated cluster (NVDA+VTI+VXUS).**
Equities-only hedges against broad vol spikes are structurally weak (can't buy puts, can't short), so the honest hedge is capital discipline: hold the $6.00 deployable cash as genuine dry powder rather than deploying it into more Tech-correlated exposure ahead of 8/26, and treat the untouched $50 reserve as the real tail-risk backstop it already is (§5) rather than a number to erode. This isn't a new position — it's a recommendation to keep optionality by *not* adding correlated risk into a low-VIX, pre-catalyst window.

**Risk #3: NVDA/CRWD earnings binary event, 9 days out.**
The written 8/14 contingency plan (state.md) is the right mechanism and should stand — no same-minute decisions, structural-break-only trim trigger. The one gap: it was written against the 12.48% direct NVDA figure. Recommend explicitly extending the plan's scope to the ~14.94% look-through figure before 8/26, so the post-print re-read isn't working off an understated base.

## 10. Rebalancing suggestions with allocation percentages

| Sleeve | Target (% of pool, per BR's policy) | Actual (% of pool) | Gap |
|---|---|---|---|
| VTI (core) | 30% | 32.46% | +2.46pp over |
| VXUS (core) | 25% | 26.67% | +1.67pp over |
| NVDA (satellite) | 15% | 11.02% | -3.98pp under |
| OMCL (satellite) | 10% | 7.55% | -2.45pp under |
| XLE (satellite) | 10% | 10.57% | +0.57pp over |
| Cash (dry powder) | 10% | 11.74% | +1.74pp over |

No position breaches the 5pp single-position drift trigger this run (VTI, the closest, is at half that threshold) — **no rebalancing action required under the standing policy framework.** From a pure risk (not policy) lens, this desk's own view: don't use NVDA's policy underweight (-3.98pp) as a reason to add to it before 8/26 without first re-running the sizing math on the ~14.94% look-through basis (§2) rather than the 11.02%-of-pool nominal figure — the policy gap looks larger than the true risk-adjusted gap once VTI's embedded NVDA weight is counted.

---

Sources:
- [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield)
- [Nvidia's rising CDS the talk of Wall Street amid circular financing fears (Investing.com)](https://www.investing.com/news/stock-market-news/nvidias-rising-cds-the-talk-of-wall-street-amid-circular-financing-fears-4816626)
- [VIX: Wall Street's 'fear gauge' hits 2026 low — here's why (CNBC)](https://www.cnbc.com/2026/08/17/stock-market-volatility-vix-wall-street.html)
- [Economic outlook for 2026 (RSM US)](https://rsmus.com/insights/economics/economic-outlook-for-2026.html)
- [US recession by end of 2026? Trading Odds & Predictions (Polymarket)](https://polymarket.com/event/us-recession-by-end-of-2026)
- [How Likely Is a Recession in 2026? (Yahoo Finance)](https://finance.yahoo.com/economy/articles/likely-recession-2026-experts-theres-112000633.html)
- [VTI ETF Stock Price & Overview (StockAnalysis.com)](https://stockanalysis.com/etf/vti/)
- [Vanguard Total International Stock ETF factsheet (Vanguard, Q1 2026)](https://workplace.vanguard.com/assets/corp/fund_communications/pdf_publish/us-products/investment-profiles/3369.pdf)
- Internal: trading-experiment/state.md (8/17 ~09:39 ET and ~10:37 ET Balance history and Run notes, NVDA earnings contingency plan, Strategy & theories rules 1-15), analysts/ms-dcf-valuation.md (8/17 ~10:2x ET), analysts/gs-stock-screener.md (8/17 late-morning), analysts/jpm-earnings-analyzer.md (8/17 morning), analysts/br-portfolio-builder.md (8/13 ~16:2x ET, stale but re-weighed). Live position/price data: Robinhood `get_portfolio` + `get_equity_positions` + `get_equity_quotes`, account 424593861, this run (~10:4x ET).
