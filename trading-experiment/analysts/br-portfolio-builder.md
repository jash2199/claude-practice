# BR Portfolio Builder — Investment Policy Report
**Date: 2026-08-07 (Friday), evening ET**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-08-06 ~16:15 ET (the $2.00 VTI trim recommendation, executed by the trader 8/7 ~09:44 ET). Portfolio figures below are derived from state.md's freshest Robinhood-verified `get_portfolio` read (8/7 ~15:36 ET, seventh and likely last run of the trading day). I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant.*

---

## TOP OF REPORT — single biggest gap vs. policy

**The VTI overweight this desk flagged and the trader trimmed on 8/6-8/7 is no longer the book's biggest problem. NVDA's underweight now is — and by a wider margin than VTI's remaining overweight.**

| | Gap (pp of pool) |
|---|---|
| NVDA | **−4.08pp UNDER** (10.92% actual vs. 15% target) |
| VTI | +2.70pp over (32.70% actual vs. 30% target) — down from +6.73pp before last week's trim |
| VXUS | +1.65pp over (26.65% vs. 25%) |
| OMCL | −2.13pp under (7.87% vs. 10%) |
| XLE | −0.07pp (9.93% vs. 10%) — essentially on target |
| Cash | +1.89pp over (11.89% vs. 10%) |

The trim worked exactly as designed: it cut VTI's breach by more than half and pushed cash back over its floor without forcing full compliance in one move. But it mechanically shrank VTI's share of the pool, which — combined with NVDA's own price drift over the past two weeks — leaves **NVDA as the single largest live gap on the book, at −4.08pp**, wider than VTI's remaining +2.70pp overweight.

**This is not a buy signal.** NVDA is up +1.69% today alone and sitting near a fresh cycle high; adding today would be a textbook rule-2 chase, not a disciplined fill of an underweight. The gap is a **price-drift artifact** — other positions (VXUS, OMCL's bounce, cash from the trim) grew their share of the pool while NVDA's own allocation held roughly flat in dollar terms — not a decision anyone made to under-own NVDA. Nothing on this gap is actionable today; it is a monitor-only item, restated below in §5, and it should not be closed reactively on a green day. It would, however, be the natural destination for new capital on a genuine NVDA pullback, ahead of adding to an already-overweight core sleeve.

No position currently breaches the book's 5pp single-position drift trigger (VTI's +2.70pp is now comfortably inside it). This is the first week since the trigger was formalized that the book is drift-trigger-clean across all five holdings plus cash.

---

## 1. Recommended allocation vs. current book

Trading-book value (per state.md's 8/7 ~15:36 ET Robinhood-verified read): **pool ≈ $50.4663** = equity $44.4663 + deployable cash $6.00. (Reserve: a further ~$50 untouchable, per Jash's 7/10 clarification — excluded from all percentages below. **All percentages in this report are % of pool unless explicitly marked "% of equity."**)

| Sleeve | Ticker | Role | Target % (of pool) | Current % (of pool) | Current $ | Gap |
|---|---|---|---|---|---|---|
| Core | VTI (Vanguard Total Stock Market) | Core — broad US equity | 30% | 32.70% | $16.50 | +2.70pp over (post-trim, inside the 5pp trigger band) |
| Core | VXUS (Vanguard Total International) | Core — ex-US diversifier | 25% | 26.65% | $13.45 | +1.65pp over |
| Satellite | NVDA | Satellite — single-name AI/semis conviction | 15% (soft cap 18-20% of equity) | 10.92% | $5.51 | **−4.08pp UNDER — largest gap on the book, see TOP** |
| Satellite | OMCL | Satellite — healthcare-tech diversifier, half-size | 10% | 7.87% | $3.97 | −2.13pp under (extending its bounce — third+ straight up session) |
| Satellite | XLE (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 9.93% | $5.01 | −0.07pp — effectively on target |
| Cash | — | Dry powder / event-window buffer | 10% | 11.89% | $6.00 | +1.89pp over (cleared the floor for the first time in over a week per last week's trim) |
| **Total** | | | **100%** | **100%** | **~$50.47** | |

**Core / Satellite / Cash roll-up**: Core 55% target vs. **59.35% actual (+4.35pp OVER)**; Satellite 35% target vs. **28.72% actual (−6.28pp UNDER)**; Cash 10% target vs. **11.89% actual (+1.89pp over)**. The structural imbalance this desk has flagged for weeks — too much core, too little satellite — persists even after the VTI trim, because the trim's proceeds went to cash, not to satellite (deliberately, per last week's reasoning: every satellite slot was gated). That gap is now GS's and this desk's shared next priority (see §7).

---

## 2. Core vs. satellite discipline — status check

- **Core (VTI + VXUS, target 55% of pool)**: VTI back inside the drift-trigger band after last week's trim — no further action. VXUS (+1.65pp) is close enough to target that no action is warranted. Combined core is still +4.35pp over target, but with no live trigger firing on either leg individually, this desk is not recommending a second trim — one disciplined action per cycle is the pattern, not continuous fine-tuning.
- **Satellite (NVDA + OMCL + XLE, target 35% of pool)**: still 6.28pp under target, the widest satellite shortfall in weeks. NVDA's gap is the headline (see TOP) but is a monitor-only price-drift item, not a decision. OMCL extended its bounce to a **third-plus straight up session** (+2.92% today, live $37.215) with no identified company catalyst — BW's own report today (14:41 ET) is starting to question whether this is still simple mean-reversion off the post-earnings slide or the early stage of a real re-rating; this desk agrees it is not yet actionable but is now watching the same signal. XLE is essentially on target and, per MS's oil-adjusted read, roughly fairly positioned relative to its own DCF gap (still overvalued, but the gap narrowed on today's genuine oil move — do not add, do not trim).
- **Cash (target 10%)**: 11.89% of pool, comfortably above target for a second consecutive reporting cycle — genuine dry powder, not a stuck floor. This is the resource the satellite shortfall needs; the constraint has shifted from "no cash" to "no cleared gate" (see §7).

## 3. Expected annual return range (historical basis)

| Holding | Basis | Expected range (long-run, annualized) |
|---|---|---|
| VTI | US total-market index, ~97-year S&P-proxy history | ~9-11% nominal. Rate backdrop: fresh WebSearch this run finds the 10-year Treasury in the **4.6-4.69%** range as of 8/6-8/7 (sources split on the exact print), still comfortably below Rule 6a's 4.75% two-close trigger — a weak July jobs report (−23K vs. +80K expected) is driving rate-cut optimism, a tailwind for equity multiples if it holds |
| VXUS | Developed + EM ex-US index | ~6-9% nominal; same modest rate tailwind as VTI, plus a structural case strengthened this cycle (see §8) |
| NVDA | Single-name, AI/semis hypergrowth — MS's fair value (~$150.6, model unchanged) | Historically 25-40%+ CAGR over the past decade; not a sustainable forward baseline. MS's downside gap sits at **~32.2-32.4%** (price-move effect only, model unchanged since 7/24). August 26 print (19 days out) is the next real catalyst |
| OMCL | Small/mid-cap healthcare-tech, high earnings-day beta | ~8-15% long-run. MS's model-unchanged fair value ($53.89) implies **~44.8%** upside at today's bounced-up price (~$37.215, narrower than this morning's ~48.0% at $36.40, purely because the price itself has risen three sessions running) — still the widest discount on the book by a wide margin |
| XLE | Energy sector basket, oil-cycle-driven | ~5-9% long-run with high cyclical variance. MS's oil-adjusted composite gap: **~17-18% overvalued**, narrowed from 8/6's ~21-22% on a genuine ~4.2% WTI jump — but MS itself flags the underlying XOM/CVX equity quotes as likely stale for a second straight session, so treat this narrowing as directionally real but lower-confidence than usual |

**Blended portfolio expectation at current weights**: roughly **8-12% annualized** over a full market cycle — unchanged from recent reports. This week's market backdrop was unusually strong (S&P +3.6% for the week, Nasdaq +5.2% on a chip-sector bounce, Dow +3%, per fresh WebSearch), consistent with the book's own five straight positive Balance-history reads today; nothing here argues for revising the long-run band, since a single strong week doesn't change any of the five holdings' underlying return assumptions.

## 4. Expected maximum drawdown in a bad year

Per BW's 8/7 ~14:41 ET recession stress test (freshest on file, methodology unchanged for weeks):

- **Blended equity-sleeve estimate: ~-34%**, applied to the current $44.47 equity sleeve implies roughly **-$15.1**, bringing account total value to **~$85.3, an approximate -15.1% whole-account drawdown** — cushioned by the ~54% total-cash allocation (of which $50 is untouched reserve), but the equity sleeve itself would take a much harder hit than the whole-account number implies. Unchanged in substance from every recent read.
- **Per-position estimates (BW, unchanged)**: NVDA -45% to -55%; OMCL -35% to -45% (already -20.6% unrealized, thin-book); VTI -30% to -35% (tech-tilted); VXUS -25% to -30% (unhedged FX risk in a dollar-flight scenario); **XLE -30% to -45% in a demand recession but could instead rally in a supply/geopolitical-driven one** — the asymmetry is the reason for holding it, but this week produced a live, small-scale example of the hedge *not* working: BW logged XLE closing every single intraday read red today while the rest of the book closed every read green, a full-session confirmation (not just a morning hint) that the hedge decouples specifically in a demand-driven, risk-on regime.
- **Rate-shock channel, restated**: Rule 6a (10yr >4.75%/30yr >5.25% on two consecutive closes) remains untested — this week's rate move was mildly *down*, not up, on the weak jobs print, moving further from the threshold rather than closer. No action needed.

**Policy guidance, restated**: the $50 reserve remains the only hard floor on total-account damage in any scenario. The half-size satellite-entry discipline applied to OMCL and XLE continues to keep even a live, ongoing narrative reversal (like this week's XLE decoupling) to a small dollar impact at this account's size.

## 5. Rebalancing schedule and trigger rules

1. **Calendar cadence**: standing bi-weekly allocation check plus any trigger-fired reviews below — unchanged.
2. **Drift trigger** (now proven bidirectional): any single position drifting more than **5pp from its own pool-basis target %** flags for review. **No position currently breaches this** — VTI's post-trim +2.70pp and NVDA's -4.08pp are both inside the band. NVDA is the one to watch: if its underweight ever widens past -5pp (either from further relative price drift or an actual decision to trim elsewhere), it becomes a live trigger rather than a monitor item — but closing it reactively on a green day like today would violate rule 2.
3. **Satellite concentration trigger** (unchanged): any single satellite name crossing ~18-20% of equity forces a mandatory trim review — all three clear individually (NVDA 12.42% of equity is the closest). **This desk is formally adopting BW's twice-proposed combined NVDA+OMCL concentration trigger today**, closing a gap that has sat as an unactioned proposal for two full days: **if NVDA + OMCL combined exceed 25% of equity, it triggers a mandatory review of both positions together** (not necessarily a trim of either — the review could instead conclude the two are diversifying against genuinely different risk factors, per Strategy & theories rule 9, and leave both alone). Current status: **21.35% of equity, flat through today's session** — not fired, but now a written rule rather than a standing informal flag repeated by BW for a third day running.
4. **Falsifiable-trigger discipline** (unchanged): no open time-boxed trigger remains active on any current holding.
5. **VTI drift review — closed for this cycle.** Last week's $2.00 trim brought the gap from +6.73pp to +2.70pp, inside the trigger band. No further trim recommended; watch for renewed drift on price appreciation alone before the next scheduled review.
6. **Rule 6a (rate-shock trigger)**: formally adopted 8/6, unchanged this cycle. Current status: 10yr ~4.6-4.69% (moved slightly *away* from the 4.75% threshold this week on dovish jobs-data repricing), not fired.
7. **XLE hedge-symmetry note**: this week's full-session decoupling (XLE red on every read while the rest of the book was green) is evidentiary, not a trim signal — BW's own read, which this desk endorses. The standing ask to MS (split demand-destruction from geopolitical-risk-premium in the next oil-adjusted DCF) is still open and, per BW, now more urgent given a full session of data exists to work with.

## 6. Tax efficiency strategy (taxable cash account)

- **Every position in this book is still short-term** — the oldest holding (NVDA, entered 7/9) is not yet a month old. Any gain realized is taxed as ordinary income. Last week's $2.00 VTI trim realized the book's first-ever taxable gain (~$0.04-0.05) — immaterial at this account's size, logged for the record.
- **Tax-loss harvesting readiness, updated**: OMCL's unrealized loss sits around **-20.6%** as of today's close-adjacent read (per BW) — still the book's largest unrealized loss by a wide margin, though it has narrowed from prior weeks as the position has bounced three sessions running. No harvesting action recommended (OMCL is a live, cross-vetting-blocked satellite position with the widest DCF discount on the book, not a candidate for an exit); flagged for the record only.
- **Wash-sale discipline**: unchanged — if a satellite position is ever sold at a loss, do not re-buy the same ticker within 30 days. Not currently applicable to any live position.
- **Materiality caveat**: at ~$50.47 deployed, today's tax dollar impact is trivial regardless of action taken. The discipline exists for when the account scales.

## 7. Dollar-cost-averaging plan for redeploying profits

1. **Deployable cash is $6.00 (11.89% of pool)** — above the 10% target for a second consecutive reporting cycle. The constraint on new capital has genuinely shifted from "not enough cash" to "no cleared gate" — every current satellite candidate beyond the existing three positions remains rule-6 blocked.
2. **Standing next-dollar priority, re-ranked this cycle to match GS's updated ordering (this desk agrees with the reordering rationale):**
   - **(a) GEHC, now the top ask.** Seven-plus weeks rule-6-blocked with zero MS DCF or BW risk read started. Unlike IONQ, GEHC's price has been stable through the delay (no urgency cost to clearing it first) — GS's fresh case: clear the cheapest-to-clear gate first rather than let a stable thesis keep waiting behind a moving one.
   - **(b) IONQ, second.** A confirmed $28M DARPA contract extension (a durable, government-validated data point layered on an already-strong beat-and-raise) drove a ~9% pop today to ~$42 — the thesis just got stronger, but the entry math just got materially worse while the cross-vet sat open. Still rule-6 blocked; today's price strength is itself a rule-2 chase signal on top of the missing gate, so no entry regardless of when the gate clears, but the cross-vet itself should not wait longer.
   - **(c) OMCL's sizing re-test, third.** GS/MS/BW's own framing (a known model, just needs the cash-level caveat re-checked) — now into a sixth week, still blocked purely on the standing post-transcript BW sign-off, not on data.
   - **(d) Core (VTI or VXUS) last.** Both are at or near target; no case for adding to an already-overweight core sleeve while satellite sits 6.28pp under target.
3. **A genuinely new candidate class flagged this cycle, not yet actionable**: fresh WebSearch (see §8) surfaces multiple 2026 outlook pieces — including BlackRock's own house view — recommending dividend-paying, "old economy" sector exposure (utilities, healthcare, industrials, financials) as a specific diversifier against the AI/mega-cap concentration trade, distinct from just adding more broad-market or international exposure. GEHC (healthcare) already sits in the pipeline and fits this framing directly; worth noting as an additional reason to prioritize its cross-vet, on top of GS's cash-urgency argument.
4. **Cash floor**: holding above target is appropriate while three genuine ideas sit in the queue; this desk is not recommending redeploying cash into an ungated name to force the floor back down.

## 8. Areas to consider from recent WEF / macro-policy discussion (fresh WebSearch this run)

- **Concentration risk has sharpened further since last week's report.** Fresh search this cycle finds the figure now commonly cited as the **10 largest S&P 500 constituents accounting for over 40% of the index's market cap** (up from the ~36% figure cited last week, itself up from ~23% five years ago) — Morningstar's Dan Lefkovitz frames this level as one that "historically preceded regime shifts, not extensions." This is a direct, external validation of this book's own internal concern (BW's ~21-23% look-through NVDA/OMCL correlated-growth exposure, VTI's own tech look-through) and strengthens, not just repeats, last week's flag.
- **BlackRock's own 2026 house outlook is directly on point this cycle**: it specifically recommends international equities, emerging-market Asia exposure, and "diversified diversifiers" (low-correlation alternatives) as the tools for addressing AI-driven concentration risk — exactly the VXUS-style ex-US allocation this book already carries at target weight, plus a reminder that this book's equities/ETFs-only mandate rules out the "alternatives" leg BlackRock's broader guidance would otherwise suggest.
- **A second, more specific tactical theme surfaced this cycle**: multiple sources (Edward Jones, Morningstar) point to dividend-paying, old-economy sector exposure — utilities, healthcare, industrials, financials — as outperforming when the AI/mega-cap trade cools, distinct from simply adding more broad-market exposure. This directly supports prioritizing GEHC's cross-vet (see §7) over a pure momentum name.
- **Rate story, updated**: 10yr yield reported 4.6-4.69% across sources this week (some dispersion, still resolving toward the lower end on the weak jobs print), September hike-vs-cut odds continuing to shift dovish. Still below Rule 6a's threshold — restated, not re-derived, since nothing changed materially on this axis this week.
- **Market backdrop, for context**: this was a strong week for the book's own asset classes — S&P +3.6%, Nasdaq +5.2% (chip-sector bounce), Dow +3% for the week — consistent with the five consecutive positive Balance-history reads logged today. A strong week is not itself a reason to revise any target weight; it is the reason NVDA's gap widened (other positions and cash grew faster) and OMCL's discount narrowed (see §3).

---

## One-page Investment Policy Statement (for the trader to follow)

**Client**: Claude Robinhood Trader experiment. Capital: $50 base + accumulated profits, inside a ~$100 taxable cash account (the ~$50 beyond trading capital is untouchable reserve). Risk tolerance: aggressive. Horizon: short-to-medium, with an explicit goal of compounding into a long-running track record. Universe: equities/ETFs only, no options, fractional shares available.

**Target allocation** (of the ~$50.47 trading pool — all targets and gaps in this report are pool-basis unless marked otherwise): Core 55% (VTI 30% / VXUS 25%) — Satellite 35% (NVDA 15% soft-capped at 18-20% of equity; OMCL 10%; XLE 10%) — Cash 10% (higher during live binary-event windows or an active Rule 6a rate-shock window).

**Standing rules** (see Strategy & theories in state.md for full detail, rules 1-13 plus 6a): no trade without a fresh catalyst *or without a pre-committed rule-based trigger firing*; never chase an extended move; diversified-basket buys are exempt from the single-name geopolitical veto; always verify price live via Robinhood before sizing; a DCF "sharply overvalued" call is a hard pass; new ideas need a full cross-vetting cycle before sizing; open theses get a falsifiable trigger with a hard time-box; look-through concentration matters more than headline allocation; Rule 6a (rate-shock pause, 10yr >4.75%/30yr >5.25% on two consecutive closes) — not in effect, 10yr ~4.6-4.69%; **new this report — a combined NVDA+OMCL concentration trigger at 25% of equity, formally adopted this cycle (see §5.3), currently 21.35% of equity, not fired.**

**Current live decision point**: **none requiring trade execution today.** No position breaches the 5pp drift trigger. NVDA's -4.08pp underweight is the book's largest gap but is explicitly monitor-only (price-drift artifact, today's +1.69% move makes it a rule-2 chase if closed reactively). The actionable item this cycle is a **process ask, not a trade**: prioritize clearing GEHC's rule-6 cross-vet first (stable price, no urgency cost, healthcare/dividend-defensive fit per this week's macro reads), then IONQ (thesis strengthened, entry price has moved against further delay), then OMCL's sizing re-test.

**Review cadence**: bi-weekly standing allocation check, plus trigger-fired reviews on >5pp single-position drift (bidirectional, proven twice now — once on OMCL/XLE entries, once on VTI's trim), satellite concentration crossing 18-20% of equity individually or 25% combined (NVDA+OMCL, newly adopted this cycle) on a face-value basis, any pre-committed time-box reaching its deadline, or Rule 6a firing.

---

## Cross-check with other analysts

- **BW (8/7, ~14:41 ET)**: held risk grade at C, escalated XLE's full-session decoupling from a morning hint to a confirmed pattern — this desk agrees it's evidentiary, not a trim signal, and separately adopts BW's twice-proposed NVDA+OMCL 25%-of-equity combined trigger as formal policy this report (§5.3), closing a two-day-old open flag.
- **GS (8/7, evening)**: reordered its own rule-6 ask to GEHC-first, IONQ-second, citing IONQ's worsened entry math (today's ~9% DARPA-driven pop) as a concrete, dated cost of the open gate. This desk explicitly endorses the reordering and adds a macro-fit argument for GEHC (this week's WEF/outlook reads favor old-economy/dividend sectors as an AI-concentration diversifier) on top of GS's cash-urgency argument.
- **MS (8/7, morning)**: NVDA/OMCL price-only rolls, models unchanged on both. XLE's oil-adjusted gap narrowed to ~17-18% on a genuine WTI move but flagged as lower-confidence given stale-looking XOM/CVX equity quotes — this desk's do-not-add stance holds regardless of which end of that range is real.
- **JPM (8/7, market open)**: no covered name inside the 2-week earnings window; NVDA's pre-earnings coverage reopens ~August 12 (14 days out from that report). Nothing to reconcile against this report.

---

Sources:
- [S&P 500 rises to record close Friday and posts strongest week since April (CNBC)](https://www.cnbc.com/2026/08/06/stock-market-today-live-updates.html)
- [Stock Market Today (Aug. 7, 2026): Nasdaq rises after July jobs report shows unexpected losses (TheStreet)](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-aug-7-2026)
- [Stock Market Today: Dow, S&P Live Updates for August 7 (Bloomberg)](https://www.bloomberg.com/news/articles/2026-08-06/stock-market-today-dow-s-p-live-updates)
- [US10Y: U.S. 10 Year Treasury (CNBC)](https://www.cnbc.com/quotes/US10Y)
- [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield)
- [2026 Outlook: Innovation & AI, Plus Diversification (Edward Jones)](https://www.edwardjones.com/us-en/market-news-insights/stock-market-news/generations-outlook)
- [The AI Supercycle: Navigating Concentration Risk in 2026 (ETF.com)](https://etfdb.com/news/2026/01/09/navigating-concentration-risk-2026/)
- [These Diversification Strategies Are Winning in 2026 (Morningstar)](https://www.morningstar.com/portfolios/these-diversification-strategies-are-winning-2026)
- [5 smart ways to diversify your portfolio in 2026 (Barchart/Yahoo Finance)](https://www.barchart.com/story/news/274964/5-smart-ways-to-diversify-your-portfolio-in-2026)
- Internal: trading-experiment/state.md (8/7 Balance history and Run notes through the 15:36 ET close, Strategy & theories rules 1-13/6a), analysts/bw-risk-assessment.md (8/7 ~14:41 ET), analysts/gs-stock-screener.md (8/7 evening), analysts/ms-dcf-valuation.md (8/7 morning), analysts/jpm-earnings-analyzer.md (8/7 market open)
