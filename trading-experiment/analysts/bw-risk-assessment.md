# BW Risk Assessment — Risk Management Report
**Date: 2026-10-14 (Wednesday), ~10:4x ET (verified via live quote timestamps, `venue_last_trade_time` ≈14:41:50 UTC).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Nineteenth BW report overall, first of the day — follows this desk's own 2026-10-13 ~14:42 ET report, JPM's fresh 09:2x ET GEHC brief, GS's 09:4x ET screener, and MS's 10:1x ET price-roll.

---

## Overall Portfolio Risk Grade: **D-** — held, unchanged from 10/9–10/13

## Single biggest risk right now
**The whole book just sold off together, with no sourced catalyst, for the third time this week — and the team still can't tell whether that's noise or the start of something, because the data feed behind every model has now gone two full weeks without an independent confirmation.** This morning: NVDA -2.10%, VTI -0.75%, VXUS -0.92%, OMCL -1.62%, GEHC -0.28% — five of six holdings red in lockstep, only XLE green (+0.11%). Fresh WebSearch this run for a same-day 10-year Treasury print, a post-CPI market reaction, and GEHC- or Hormuz-specific news all came back empty — the identical dateline wall MS, GS, and this desk have each flagged independently all week, now stretching into a second week on the rate input specifically (Rf 5.29%, set 10/1, **13 calendar days unconfirmed**). A risk desk that cannot attribute a simultaneous five-name down-move to anything — rate shock, growth scare, profit-taking, or plain noise — is not distinguishing signal from noise; it is reporting a number with no explanation attached, run after run. The one piece of good news hiding in today's data: **XLE's behavior (the only green name, +0.11%) is exactly what the hedge was bought to do on a risk-off morning** — see §1. That doesn't resolve the attribution problem; it's a single data point, not a pattern, and this desk isn't ready to call it confirmation yet. Separately, **GEHC flipped back to a net loss this morning** (-0.14% vs. the $68.69 cost), erasing the two-session "genuine gain" that drove BW's and BR's exchange yesterday on whether the no-upside-trigger band should reopen — BR's answer (no, on price/valuation-gap movement alone) stands either way, but the reversal is a reminder of how little one or two green closes actually tell this team.

---

## Portfolio snapshot (live, 2026-10-14 ~10:4x ET)

`get_portfolio`: total_value **$100.6334426935** (cash $56.10 + equity $44.5334426935). Pool ≈ **$50.6334426935**, a **+$0.6334426935 (+1.267%) accumulated profit** — essentially flat vs. the prior check-in's +1.28% (10:37 ET), down from this morning's open-of-day high of +1.60% (09:36 ET). Deployable cash **$6.10 (~12.05% of pool)**, unchanged.

`get_equity_quotes` (live last-trade vs. 10/13's official close):

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/13 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $223.715 | $5.554 | 12.47% | 10.97% | +11.08% ($201.40) | **-2.10%** |
| VTI | 0.036690 | $378.477 | $13.886 | 31.17% | 27.43% | +2.18% ($370.40) | -0.75% |
| VXUS | 0.154525 | $83.766 | $12.944 | 29.07% | 25.57% | -0.43% ($84.13) | -0.92% |
| OMCL | 0.106405 | $35.860 | $3.816 | 8.57% | 7.54% | **-23.69% ($46.99)** | -1.62% |
| XLE | 0.086775 | $67.275 | $5.838 | 13.11% | 11.53% | **+16.76% ($57.62)** | **+0.11% — today's only green holding** |
| GEHC | 0.036393 | $68.595 | $2.496 | 5.61% | 4.93% | **-0.14% ($68.69) — flipped negative again** | -0.28% |
| Cash (deployable) | — | — | $6.10 | — | 12.05% | — | — |

NVDA+OMCL combined concentration: **21.04% of equity** — 3.96pp buffer to the 25% backstop trigger. NVDA alone: **12.47% of equity / 10.97% of pool**, +0.97pp over BR's 10% target, inside the 5pp drift band. **OMCL's DCA gate (rule 18, fires at $2.50 accumulated pool profit): accumulated profit $0.633 vs. threshold, ~$1.867 away** — widened slightly from the 10:37 ET reading (~$1.862) as the morning's small further pullback moved the pool's own profit print the wrong way. Still not fired, and now moving away from the gate rather than toward it for the first time in several sessions.

---

## 1. Correlation analysis between holdings

- **Today's defining fact: five of six holdings moved down together, in lockstep, with no sourced catalyst.** NVDA -2.10%, VTI -0.75%, VXUS -0.92%, OMCL -1.62%, GEHC -0.28% — a correlation-to-1 morning across the non-energy sleeve, exactly the kind of simultaneous-drawdown scenario this desk's recession stress test (§5) and tail-risk table (§8) model as a probability, now visible in miniature on an ordinary Wednesday with zero attribution.
- **XLE (+0.11%) is the one name that diverged — and that divergence is the entire point of holding it.** This is the cleanest real-time evidence yet that the XLE hedge is structurally uncorrelated with the NVDA/VTI/VXUS/OMCL/GEHC cluster on a risk-off morning, which is encouraging, but one data point does not confirm a hedge works; it only fails to disconfirm it. This desk will not call this a validated pattern until it recurs on a dated, sourced risk-off catalyst rather than an unattributed one.
- **NVDA / VTI / VXUS**: still the shared mega-cap/US-market-beta/AI-look-through cluster — all three red today, directionally identical, consistent with the standing read.
- **OMCL / GEHC**: both red today (-1.62% and -0.28% respectively) — the first time in several sessions these two have moved the same direction rather than diverging; too small a sample to revise the standing "low correlation beyond the healthcare label" read, but worth tracking.
- **XLE vs. Hormuz**: fresh search this run again found nothing dated past 10/11 (the straits.live brief BR cited yesterday — 4 transits on 10/4 vs. an 85/day pre-crisis baseline, strait "effectively closed," Brent ~$104.72). The hedge thesis's underlying catalyst is unchanged and still live, not resolved either way.

## 2. Sector concentration (% of equity, look-through where estimable)

| Sector / bucket | % of equity | Note |
|---|---|---|
| Technology / Semis / AI (look-through: direct NVDA + VTI's/VXUS's own tech weight) | **~27-30% (estimate)** | Direct NVDA alone is 12.47%; remainder is look-through via the two core ETFs — standing estimate |
| Diversified US equity (VTI, ex-tech-look-through) | 31.17% (gross) | Largest single line item, a basket not a sector bet |
| Diversified ex-US equity (VXUS, ex-tech-look-through) | 29.07% (gross) | Second-largest line item, same caveat |
| Energy (XLE) | 13.11% | Satellite/hedge sleeve — today's only green holding, now the book's largest unrealized winner at +16.76% |
| Healthcare — tech/services (OMCL) | 8.57% | Smallest-cap, least liquid holding |
| Healthcare — medtech/equipment (GEHC) | 5.61% | Over BR's 4% target, inside the 5pp band |

**Combined healthcare (OMCL+GEHC): 14.18% of equity.** **Combined satellite/conviction sleeve (NVDA+OMCL+XLE+GEHC): 39.76% of equity** vs. **60.24% in the two core ETFs** — unchanged in shape from yesterday.

## 3. Geographic exposure and currency risk

- **VTI**: 100% US-domiciled, USD-denominated. No direct FX risk.
- **VXUS**: ~100% ex-US (developed + EM), underlying holdings in EUR/JPY/GBP/EM currencies — the book's only real currency-translation exposure at the fund level. Unchanged.
- **NVDA**: USD revenue, with Taiwan/China supply-chain and end-market exposure — geopolitical/export-control risk that rhymes with currency risk.
- **OMCL**: essentially pure US domestic revenue — no meaningful geographic/currency risk.
- **XLE**: US-domiciled integrated/E&P majors (XOM/CVX-weighted) with global operations; oil itself is a globally USD-priced commodity. Hormuz picture still reads as "effectively closed," not normalizing — unchanged from yesterday's finding, no fresher dated data located.
- **GEHC**: meaningful international revenue (global medtech sales) — some currency-translation exposure, smaller in dollar terms than VXUS's fund-level exposure given GEHC's 5.61% weight.

**Net: still a USD-heavy book.** VXUS remains the only deliberate non-US/non-USD diversifier, modestly over its 25% pool target (+0.57pp) — adequate as designed, no concern this run.

## 4. Interest rate sensitivity (per position)

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's DCF gap (-14.55%) rests entirely on a Rf input now 13 calendar days unconfirmed |
| GEHC | **High** | Same DCF/WACC mechanism; MS's gap sits at a new worst-ever -8.01%, now widening for a third straight report even as price flipped back negative today |
| XLE | **High (via valuation channel) / Low-moderate (via cash flows)** | MS's DCF gap sits at a new worst-ever -12.59% (eighth straight widening) while price is today's only green holding — the price/valuation divergence flagged repeatedly this week, still unresolved |
| OMCL | **Moderate-high** | DCF-dependent valuation (widest discount on the book, +35.41% undervalued per MS's 10/14 build, itself WACC-sensitive), partially offset by contracted/recurring revenue |
| VTI | **Moderate** | Broad market including heavy mega-cap-growth/tech weighting, diversified by cyclicals/value too |
| VXUS | **Moderate-low** | Less mega-cap-growth-heavy than the US market; EM components carry independent rate/FX sensitivity |

**Standing flag, now entering its third week unresolved and getting worse, not better:** this desk's own fresh search this run (10-year Treasury print, September CPI reaction) again found nothing reliably dated to today — the same wall GS and MS both independently hit this morning. GS specifically flagged today's scheduled CPI release as the most likely resolution catalyst; this desk's search could not locate the print or any market reaction to it. **This morning's broad, simultaneous five-name down-move is observationally consistent with a hot-CPI, rate-driven risk-off reaction — but this desk cannot confirm that, and treating an unconfirmed hypothesis as an explanation would be exactly the "unattributed move as a signal" error rule 4 exists to prevent.** The honest state of this input is: unknown, for the 13th straight day, now actively coinciding with the broadest down-move of the week.

## 5. Recession stress test (NBER-style, moderate-recession assumptions, pool-weighted)

| Position | Assumed recession drawdown | Pool-weighted contribution |
|---|---|---|
| NVDA (high-beta, capex-cyclical) | -45% to -55% | -4.9% to -6.0% |
| VTI (broad US equity, GFC/2020-style) | -30% to -38% | -8.2% to -10.4% |
| VXUS (intl equity + FX drag) | -32% to -40% | -8.2% to -10.2% |
| OMCL (small-cap liquidity discount despite defensive end-market) | -35% to -45% | -2.6% to -3.4% |
| XLE (demand-driven recession scenario) | -30% to -45% | -3.5% to -5.2% |
| GEHC (defensive healthcare end-market, but capex-cycle exposed) | -25% to -35% | -1.2% to -1.7% |

**Estimated pool-level drawdown: roughly -28.6% to -36.9%** in a standard demand-driven recession — unchanged in substance from this week's prior reads; no fresher recession-probability figure than GS's (~30%) / Moody's (~49%) pair found this run. **Same standing caveat:** this stress test assumes a *demand-driven* recession where XLE's -30%/-45% applies; if the recession is instead *supply/oil-shock-driven* (the scenario XLE was actually bought to hedge, and the scenario today's own price action briefly illustrated in miniature), XLE's behavior flips, potentially flat-to-positive. §1/§3's Hormuz picture remains unresolved either way.

## 6. Liquidity risk (per holding)

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Low risk | Mega-cap, among the most liquid equities traded |
| VTI | Low risk | One of the largest US ETFs by AUM/volume |
| VXUS | Low risk | Large, liquid diversified international ETF |
| XLE | Low risk | Large, liquid sector ETF |
| GEHC | Low-moderate risk | Large-cap, adequate average daily volume |
| **OMCL** | **Moderate risk — the book's least liquid holding** | Small-cap (~$1.5-2B market cap); meaningfully lower ADV than every other position. Irrelevant at today's $3.82 position size; the DCA gate (~$1.87 away, now widening rather than narrowing) is not imminent this run, but when it does fire, the next tranche should still use a limit order and check the spread |

**No liquidity risk currently constrains this account's ability to exit any position at its current size.** Standing, low-urgency note, unchanged.

## 7. Single-stock risk and position sizing

- **NVDA (12.47% equity / 10.97% pool):** +0.97pp over BR's 10% pool target, inside the 5pp drift band, well below the 18-20% single-name trigger. Not a trigger. Today's -2.10% is this book's largest single-name move, consistent with high-beta behavior on an unattributed risk-off morning, not news-specific to NVDA.
- **OMCL (8.57% / 7.54%):** below its 10% pool target by design (DCA-gated, -2.46pp drift) — the mechanism working as intended. The gate (~$1.87 away) moved *away* from firing this run for the first time in several sessions as the pool's own profit print pulled back — a reminder the gate is symmetric and can widen as easily as it narrows.
- **XLE (13.11% / 11.53%):** modestly underweight its 12% pool target by equity basis but now essentially at target on pool basis, the book's single largest unrealized winner (+16.76%) and today's only green holding — see §1 for why that matters more than the number alone.
- **GEHC (5.61% / 4.93%):** +0.93pp over its 4% pool target, inside the 5pp drift band (4.07pp headroom). Flipped back to a net loss this morning (-0.14% vs. $68.69) after two sessions positive — this desk and BR's exchange yesterday about whether a gain reopens the no-upside-trigger band is, as of this morning, moot on the facts (there is no gain to debate), though BR's standing answer (no, on price movement alone) was never contingent on today's reversal anyway.
- **Combined NVDA+OMCL (21.04% of equity):** 3.96pp from the 25% backstop. No sizing action triggered.
- **No position-sizing changes recommended this run.**

## 8. Tail risk scenarios (updated probability estimates)

| Scenario | Probability estimate | Pool-level impact |
|---|---|---|
| AI-bubble repricing (NVDA DCF gap persistently wide; seven straight AI-adjacent names rejected by MS/GS on valuation, incl. ALAB) | **~22-27%, held** — no new reject added this run | -6% to -11% pool-level |
| 10yr yield confirmation gap forces a fresh WACC rebuild in either direction | **~20-25%, now 13 calendar days unconfirmed** — unchanged duration, but today's broad unattributed sell-off is the first morning this desk can point to where the *consequence* of not knowing this input (an unexplained, correlated down-move) is directly visible rather than theoretical | -3% to -8%, concentrated in NVDA/OMCL/XLE/GEHC |
| Hormuz/Red Sea escalation to a sustained, confirmed closure (or, symmetrically, a confirmed de-escalation that undercuts the hedge) | **~18-25%, held** — no fresher dated data past 10/11 found this run | XLE theoretically +15-25% as intended hedge if escalation; a real downside case to XLE's own price if a genuine, confirmed de-escalation materializes instead |
| Broad recession confirmation (NBER-style) | **~20-30% over the next 12 months**, unchanged | -28.6% to -36.9% pool-level (see §5) |
| An unattributed, correlated five-name down-day recurs without the team ever learning why | **~40-50%, newly flagged** — this is now the third such morning this week (per state.md's own run notes); the pattern itself, not any single day's size, is the thing this desk is flagging | Not quantifiable as a single drawdown — the risk is a persistent inability to distinguish noise from an emerging trend, which compounds the longer the rate/data blindness continues |
| OMCL DCA gate firing | **~25-35%, lowered from yesterday's ~35-45%** — the gate widened rather than narrowed this run for the first time in several sessions | Mechanical, pre-approved tranche — governed by rule 18, no fresh action needed |
| GEHC (10/28, now inside JPM's 14-day window) and OMCL (narrowed to 10/29-10/30 per JPM) earnings approach | On schedule, no change | Governed by existing contingency plans — JPM's fresh WAIT call on GEHC stands, no fresh action needed |
| Government shutdown escalation | ~10%, unchanged (stopgap CR funds through 12/11/2026) | -3% to -6% if it re-escalates |

## 9. Hedging strategies for the top 3 risks (equities-only — no options)

1. **Rate/data blindness, now 13 calendar days unconfirmed and today coinciding with the broadest unattributed down-move of the week:** no fixed-income sleeve exists in this all-equity mandate, so there is no true hedge — the mitigants remain deployable cash (12.05% of pool) staying uncommitted and treating every DCF-derived "fair value" figure as conditional on an input nobody has checked in two weeks. **Concrete recommendation, repeated from this desk's prior reports and now more urgent given today's visible consequence:** any report citing an MS DCF gap should state the Rf input's staleness in days alongside the gap itself, and this desk recommends the team explicitly treat the next dated CPI/10yr print — whenever it actually surfaces in a search — as a hard trigger for an immediate MS rebuild, not another day of carrying forward.
2. **NVDA/AI-concentration risk:** unchanged — direct all fresh deployable cash away from NVDA (BR's standing, permanent policy) and toward under-target names once their own gates clear. OMCL's DCA gate (~$1.87 away, now widening) remains the closest live mechanical lever despite moving the wrong direction this run.
3. **The unattributed, correlated down-day risk (new, see §8):** the only real mitigant inside an equities-only, no-options mandate is discipline, not a position — specifically, resisting the urge to either buy today's dip (no confirmed catalyst means no confirmed opportunity either) or to treat XLE's lone green print as proof the hedge "worked" (one data point, not a pattern). This desk's concrete ask: the next report that finds a dated, sourced explanation for *any* of this week's three unattributed moves should flag it loudly, specifically so the team can finally tell whether this is noise, a slow-building trend, or the rate-shock scenario already modeled in §8.

## 10. Rebalancing suggestions (allocation %, pool basis)

| Position | Current (pool) | BR target | Drift |
|---|---|---|---|
| VTI | 27.43% | 28% | -0.57pp |
| VXUS | 25.57% | 25% | +0.57pp |
| NVDA | 10.97% | 10% | +0.97pp — governed by the 5pp band, no action needed |
| XLE | 11.53% | 12% | -0.47pp |
| GEHC | 4.93% | 4% | +0.93pp — inside band, debate from yesterday now moot on the facts (position is net-negative again) |
| OMCL | 7.54% | 10% | -2.46pp (DCA-gated by design, gate widened to ~$1.87 away this run) |
| Cash | 12.05% | 11% | +1.05pp |

**No position breaches the 5pp single-position drift trigger — no rebalance is mechanically required.** This desk's recommendations above (§9.1, §9.3) are requests for disclosure discipline and a pre-committed hard trigger, not proposed trades.

---

## Heat Map Summary

| Risk Factor | Level | Trend since 10/13 14:42 ET |
|---|---|---|
| Unattributed correlated down-day (5 of 6 holdings red, no sourced catalyst, third time this week) | 🔴 High (newly elevated) | New framing this run — the pattern itself, not any one day's size |
| Rate/macro data blindness (10yr unconfirmed, now 13 calendar days) | 🔴 High | → unchanged duration, but today is the first morning its consequence (an unexplained, book-wide move) is directly visible |
| XLE price/valuation divergence (new worst-ever DCF gap -12.59%, eighth straight widening; price now the book's largest unrealized winner) | 🔴 High | → unchanged in substance |
| NVDA valuation gap + AI-bubble commentary (seven-for-seven MS/GS hard passes incl. ALAB) | 🔴 High | → unchanged, no new reject added this run |
| GEHC price/valuation divergence (DCF gap new worst-ever -8.01%; price flipped back to a net loss this morning) | 🟠 Elevated | ↓ slightly de-escalated — the "genuine gain" framing from yesterday no longer applies on the facts |
| Hormuz data (strait "effectively closed" per 10/11 brief, still the freshest dated source) | 🟠 Elevated | → unchanged; no fresher dated data this run |
| Recession probability (GS ~30%, Moody's ~49%, no fresher figure this run) | 🟠 Elevated | → unchanged |
| OMCL DCA gate proximity (widened from ~$1.47-1.86 to ~$1.87 this run) | 🟡 Moderate | ↓ moved away from firing for the first time in several sessions |
| Upcoming binary events (GEHC earnings 10/28, now inside JPM's 14-day window; OMCL earnings 10/29-10/30) | 🟡 Moderate | → unchanged |
| Look-through tech/AI concentration (~27-30% of equity) | 🟡 Moderate | → unchanged |
| OMCL drawdown (-23.69%) vs. widest DCF discount on book (+35.41%) | 🟡 Moderate | → essentially unchanged |
| Government shutdown status | 🟢 Low | → stable |
| Pool profit level (+1.27%, down from this morning's +1.60% open but not a new low) | 🟡 Moderate (reclassified from "positive") | ↓ down from both this morning's and yesterday's all-time-high reads |
| Headline concentration triggers (NVDA%, NVDA+OMCL% combined) | 🟢 Low | → clean, 3.96pp buffer to the 25% trigger |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** fresh WebSearch this run on the 10-year yield/CPI reaction, GEHC-specific news, and Hormuz/tanker traffic all returned the same chronic result this desk, GS, and MS have each independently hit this week: nothing reliably dated to today. The CPI-reaction search surfaced only 2025-dated and unrelated-year material; the GEHC search found nothing newer than already-known product/investor-conference items; the Hormuz search's freshest dateable item remained the 10/11 straits.live brief already on file (strait "effectively closed," 4 transits on 10/4 vs. an 85/day baseline, Brent ~$104.72). This is now entering its second week on the rate input specifically and its 7th-plus week on the broader dateline-staleness pattern every desk has flagged. This desk's standing recommendation stands: state explicitly when a cited search result is dated, not just whether a search "found something" — and today adds a sharper version of the same point, that an *unexplained move* should never be read as confirmation of anything, in either direction.

---

Sources:
- Robinhood `get_portfolio` / `get_equity_positions` / `get_equity_quotes` (live, 2026-10-14 ~10:4x ET)
- Internal: trading-experiment/state.md (Balance history through 2026-10-14 ~10:37 ET), analysts/ms-dcf-valuation.md (2026-10-14 ~10:1x ET, price-roll, no WACC rebuild), analysts/br-portfolio-builder.md (2026-10-13 ~16:1x ET, targets and the GEHC/XLE no-upside-trigger decision still governing), analysts/jpm-earnings-analyzer.md (2026-10-14 ~09:2x ET, GEHC full brief, WAIT verdict), analysts/gs-stock-screener.md (2026-10-14 ~09:4x ET, flags today's CPI release as the key unresolved catalyst), this desk's own 2026-10-13 ~14:42 ET report (prior version, git history)
- Fresh WebSearch this run: "10 year Treasury yield today October 14 2026 September CPI release reaction" — no result dated this week, closest dated match mid-September 2026 and earlier years; "stock market today October 14 2026 S&P 500 Nasdaq selloff" — no result dated today, closest was a February 2026 item; "GE HealthCare GEHC news October 14 2026" — nothing dated this week, only older product/conference items; "Strait of Hormuz Iran oil tanker October 2026" — freshest dateable item remained 10/11, consistent with BR's 10/13 finding, no newer data located
